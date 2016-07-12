#include "mainwindow.hxx"
#include "ui_mainwindow.h"
#include "runtime.hxx"

#include <dbl/util/crypto.hxx>

#include <string>

#include <QSystemTrayIcon>
#include <QMenu>
#include <QDebug>
#include <QSettings>
#include <QCloseEvent>
#include <QThread>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui_(new Ui::MainWindow),
	worker_(new dblui::Worker(parent))
{
	ui_->setupUi(this);
	QSystemTrayIcon* tray = new QSystemTrayIcon(QIcon("./icons/icon.png"));
	QMenu* trayMenu = new QMenu();
	trayMenu->addAction("Hide");
	trayMenu->addAction("Show");
	trayMenu->addAction("Quit");
	tray->setContextMenu(trayMenu);
	tray->show();

	worker_thread_ = new QThread();
	worker_->moveToThread(worker_thread_);

	connect(this, SIGNAL(ui_initialized(const QString&, int)), worker_,	SLOT(create_connection(const QString&, int)));
	connect(this, SIGNAL(control_restart()), worker_, SLOT(restart_service()));
	connect(worker_, SIGNAL(log(const QString&)), this, SLOT(appendLog(const QString&)));
	connect(
		worker_, SIGNAL(connection_status(dblui::ConnectionStatus)),
		this, SLOT(handle_connection_status(dblui::ConnectionStatus))
	);

	connect(
		worker_, SIGNAL(load_lists(dblui::OperationStatus)),
		this, SLOT(handle_load_lists(dblui::OperationStatus))
	);

	connect(
		worker_, SIGNAL(load_lists(const dblclient::types::DomainListsSet_t&)),
		this, SLOT(handle_load_lists(const dblclient::types::DomainListsSet_t&))
	);

	connect(
		worker_, SIGNAL(load_blocked_domains(dblui::OperationStatus)),
		this, SLOT(handle_load_blocked_domains(dblui::OperationStatus))
	);

	connect(
		worker_, SIGNAL(load_blocked_domains(const dblclient::types::DomainSet_t&)),
		this, SLOT(handle_load_blocked_domains(const dblclient::types::DomainSet_t&))
	);

	connect(
		worker_, SIGNAL(load_whitelisted_domains(dblui::OperationStatus)),
		this, SLOT(handle_load_whitelisted_domains(dblui::OperationStatus))
	);

	connect(
		worker_, SIGNAL(load_whitelisted_domains(const dblclient::types::DomainSet_t&)),
		this, SLOT(handle_load_whitelisted_domains(const dblclient::types::DomainSet_t&))
	);

	worker_thread_->start();
	initialize();
}

MainWindow::~MainWindow()
{
	delete ui_;
}

void MainWindow::initialize()
{
	statusBar()->showMessage("Initializing...");
	ui_->softwareName->setText(dblui::SOFTWARE_NAME);

	QString version = "Version: ";
	version.append(QString::number(dblui::VERSION_MAJOR));
	version.append(".");
	version.append(QString::number(dblui::VERSION_MINOR));

	ui_->versionLabel->setText(version);

	auto sysinfo = dblui::runtime::SystemInfo();
	//ui_->osName->setText(sysinfo.get_os_name().c_str());

	QSettings settings(
		dblui::SETTINGS_IDENT,
		dblui::SETTINGS_NAME
	);

	settings.beginGroup(dblui::SETTINGS_GROUP_UI);

	resize(settings.value(dblui::CFG_SIZE, QSize(400, 400)).toSize());
	move(settings.value(dblui::CFG_POSITION, QPoint(200, 200)).toPoint());

	bool disableServicePassword = settings.value(
		dblui::CFG_DISABLE_SERVICE_PASSWORD, "").toBool();

	bool saveServicePassword = settings.value(
		dblui::CFG_SAVE_SERVICE_PASSWORD, "").toBool();

	ui_->disableServicePassword->setCheckState(
		disableServicePassword ? Qt::Checked : Qt::Unchecked
	);

	ui_->saveServicePassword->setCheckState(
		saveServicePassword ? Qt::Checked : Qt::Unchecked
	);

	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_SERVICE);

	QString servicePassword = settings.value(
		dblui::CFG_SERVICE_PASSWORD, "").toString();
	QString serviceAddress = settings.value(
		dblui::CFG_SERVICE_ADDRESS, dblui::DEFAULT_SERVICE_ADDRESS).toString();
	int servicePort = settings.value(
		dblui::CFG_SERVICE_PORT, dblui::DEFAULT_SERVICE_PORT).toInt();

	settings.endGroup();
	// --

	ui_->serviceAddress->setText(serviceAddress);
	ui_->servicePort->setText(QString::number(servicePort));

	if(!servicePassword.isEmpty()) {
		ui_->disableServicePassword->setCheckState(Qt::Unchecked);
		ui_->servicePassword->setPlaceholderText("Password is set");
	}

	settings.beginGroup(dblui::SETTINGS_GROUP_PREFERENCES);

	ui_->preferencesUpdateInterval->setCurrentIndex(
		settings.value(dblui::CFG_PREFERENCES_UPDATE_INTERVAL).toInt()
	);

	ui_->preferencesEnableStatsUpload->setCheckState(
		settings.value(dblui::CFG_PREFERENCES_ENABLE_STATS_UPLOAD).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	ui_->preferencesEnableStatsUniqueID->setCheckState(
		settings.value(dblui::CFG_PREFERENCES_ENABLE_STATS_UNIQUE_ID).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_HTTP_RESPONDER);

	ui_->enableHttpResponder->setCheckState(
		settings.value(dblui::CFG_HTTP_RESPONDER_ENABLE).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	int status_code = settings.value(dblui::CFG_HTTP_RESPONDER_STATUS_CODE).toInt();

	if(status_code) {
		ui_->httpResponderStatusCode->setText(QString::number(status_code));
	}

	QString status_text = settings.value(dblui::CFG_HTTP_RESPONDER_STATUS_TEXT).toString();
	if(!status_text.isEmpty()) {
		ui_->httpResponderStatusText->setText(status_text);
	}

	settings.endGroup();

	int port = ui_->servicePort->text().toInt();

	emit ui_initialized(ui_->serviceAddress->text(), port);
}

void MainWindow::saveSettings()
{
	bool disableServicePassword = ui_->disableServicePassword->isChecked();
	bool saveServicePassword = ui_->saveServicePassword->isChecked();

	QSettings settings(
		dblui::SETTINGS_IDENT,
		dblui::SETTINGS_NAME
	);

	settings.beginGroup(dblui::SETTINGS_GROUP_UI);

	settings.setValue(dblui::CFG_POSITION, pos());
	settings.setValue(dblui::CFG_SIZE, size());
	settings.setValue(
		dblui::CFG_DISABLE_SERVICE_PASSWORD,
		disableServicePassword
	);
	settings.setValue(
		dblui::CFG_SAVE_SERVICE_PASSWORD,
		saveServicePassword
	);

	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_SERVICE);

	if(disableServicePassword) {
		settings.remove(dblui::CFG_SERVICE_PASSWORD);
	}
	else if(saveServicePassword) {
		std::string password(ui_->servicePassword->text().toUtf8().constData());

		settings.setValue(
			dblui::CFG_SERVICE_PASSWORD,
			QString::fromUtf8(dbl::crypto::md5(password).c_str())
		);
	}

	settings.setValue(
		dblui::CFG_SERVICE_ADDRESS,
		ui_->serviceAddress->text()
	);

	settings.setValue(
		dblui::CFG_SERVICE_PORT,
		ui_->servicePort->text()
	);
	
	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_PREFERENCES);

	settings.setValue(
		dblui::CFG_PREFERENCES_UPDATE_INTERVAL,
		ui_->preferencesUpdateInterval->currentIndex()
	);

	settings.setValue(
		dblui::CFG_PREFERENCES_ENABLE_STATS_UPLOAD,
		ui_->preferencesEnableStatsUpload->isChecked()
	);

	settings.setValue(
		dblui::CFG_PREFERENCES_ENABLE_STATS_UNIQUE_ID,
		ui_->preferencesEnableStatsUniqueID->isChecked()
	);

	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_HTTP_RESPONDER);

	settings.setValue(
		dblui::CFG_HTTP_RESPONDER_ENABLE,
		ui_->enableHttpResponder->isChecked()
	);

	settings.setValue(
		dblui::CFG_HTTP_RESPONDER_STATUS_CODE,
		ui_->httpResponderStatusCode->text()
	);

	settings.setValue(
		dblui::CFG_HTTP_RESPONDER_STATUS_TEXT,
		ui_->httpResponderStatusText->text()
	);

	settings.endGroup();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
	saveSettings();
	event->accept();
}

void MainWindow::on_applyAllButton_released()
{
	this->setEnabled(0);
}

void MainWindow::on_controlRestartButton_released()
{
	ui_->controlRestartButton->setEnabled(0);
	appendLog("Restarting service");
	statusBar()->showMessage("Restarting service");
	emit control_restart();
}

void MainWindow::appendLog(const QString& msg)
{
	ui_->actionLog->appendPlainText(msg);
}

void MainWindow::handle_connection_status(dblui::ConnectionStatus value)
{
	ui_->actionLog->clear();
	QString txt_status;
	bool enabled = false;

	switch(value) {
	case dblui::ConnectionStatus::FAILED:
		txt_status = "Connection failed";
		break;
	case dblui::ConnectionStatus::CONNECTED:
		txt_status = "Connected";
		enabled = true;
		break;
	case dblui::ConnectionStatus::CONNECTING:
		txt_status = "Connecting";
		break;
	case dblui::ConnectionStatus::DISCONNECTED:
		txt_status = "Disconnected";
		break;
	}

	appendLog(txt_status);
	statusBar()->showMessage(txt_status);

	ui_->controlRestartButton->setEnabled(enabled);
}

void MainWindow::handle_load_lists(dblui::OperationStatus value)
{
	ui_->listsTable->setRowCount(0);
	ui_->listsTable->setEnabled(0);

	switch(value) {
	case dblui::OperationStatus::OP_IN_PROGRESS:
		break;
	case dblui::OperationStatus::OP_SUCCESS:
	case dblui::OperationStatus::OP_FAILED:
		ui_->listsTable->setEnabled(1);
		break;
	}
}

void MainWindow::handle_load_lists(const dblclient::types::DomainListsSet_t& lst)
{
	ui_->listsTable->clear();
	ui_->domainListFilter->clear();

	//ui_->domainListFilter->addItem("-- Choose list ---");
	ui_->domainListFilter->addItem("ALL");

	for(auto const& dl : lst) {
		std::size_t n = ui_->listsTable->rowCount();
		ui_->listsTable->insertRow(ui_->listsTable->rowCount());

		QTableWidgetItem* name = new QTableWidgetItem(QString::fromStdString(dl.name));
		QTableWidgetItem* url = new QTableWidgetItem(QString::fromStdString(dl.url));
		QTableWidgetItem* active = new QTableWidgetItem(QString::number(dl.active));
		QTableWidgetItem* description = new QTableWidgetItem(
			dl.description.is_initialized() ? QString::fromStdString(dl.description.get()) : ""
		);
		ui_->listsTable->setItem(n, 0, name);
		ui_->listsTable->setItem(n, 1, url);
		ui_->listsTable->setItem(n, 2, active);
		ui_->listsTable->setItem(n, 3, description);

		ui_->domainListFilter->addItem(QString::fromStdString(dl.name));
	}
}

void MainWindow::handle_load_blocked_domains(dblui::OperationStatus value)
{
	ui_->blockedDomains->setEnabled(0);

	switch(value) {
	case dblui::OperationStatus::OP_IN_PROGRESS:
		break;
	case dblui::OperationStatus::OP_SUCCESS:
	case dblui::OperationStatus::OP_FAILED:
		ui_->blockedDomains->setEnabled(1);
		break;
	}
}

void MainWindow::handle_load_blocked_domains(const dblclient::types::DomainSet_t& lst)
{
	ui_->blockedDomains->clear();
	for(auto const& d : lst) {
		qDebug() << QString::fromStdString(d.name);
		ui_->blockedDomains->addItem(QString::fromStdString(d.name));
	}
}

void MainWindow::handle_load_whitelisted_domains(dblui::OperationStatus value)
{
	ui_->blockedDomains->setEnabled(0);

	switch(value) {
	case dblui::OperationStatus::OP_IN_PROGRESS:
		break;
	case dblui::OperationStatus::OP_SUCCESS:
	case dblui::OperationStatus::OP_FAILED:
		ui_->blockedDomains->setEnabled(1);
		break;
	}
}

void MainWindow::handle_load_whitelisted_domains(const dblclient::types::DomainSet_t& lst)
{
	qDebug() << "WHITELISTED";
	ui_->whitelistedDomains->clear();
	for(auto const& d : lst) {
		qDebug() << QString::fromStdString(d.name);
		ui_->whitelistedDomains->addItem(QString::fromStdString(d.name));
	}
}

void MainWindow::on_domainListFilter_currentIndexChanged(const QString &arg1)
{
	qDebug() << "domains filter: " << arg1;
}
