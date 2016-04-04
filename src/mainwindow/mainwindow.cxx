#include "mainwindow.hxx"
#include "ui_mainwindow.h"
#include "runtime.hxx"
#include "constants.hxx"

#include <string>
#include <dbl/util/crypto.hxx>

#include <QSystemTrayIcon>
#include <QMenu>
#include <QDebug>
#include <QSettings>
#include <QCloseEvent>


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QSystemTrayIcon* tray = new QSystemTrayIcon(QIcon("./icons/icon.png"));
	QMenu* trayMenu = new QMenu();
	trayMenu->addAction("Hide");
	trayMenu->addAction("Show");
	trayMenu->addAction("Quit");
	tray->setContextMenu(trayMenu);
	tray->show();

	initialize();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::initialize()
{
	ui->softwareName->setText(dblui::SOFTWARE_NAME);

	QString version = "Version: ";
	version.append(dblui::VERSION_MAJOR);
	version.append(".");
	version.append(dblui::VERSION_MINOR);

	ui->versionLabel->setText(version);

	auto sysinfo = dblui::runtime::SystemInfo();
	ui->osName->setText(sysinfo.get_os_name().c_str());

	QSettings settings(
		dblui::SETTINGS_IDENT,
		dblui::SETTINGS_NAME
	);

	settings.beginGroup(dblui::SETTINGS_GROUP_UI);

	resize(settings.value(dblui::CFG_POSITION, QSize(400, 400)).toSize());
	move(settings.value(dblui::CFG_SIZE, QPoint(200, 200)).toPoint());

	bool disableServicePassword = settings.value(
		dblui::CFG_DISABLE_SERVICE_PASSWORD, "").toBool();

	bool saveServicePassword = settings.value(
		dblui::CFG_SAVE_SERVICE_PASSWORD, "").toBool();

	ui->disableServicePassword->setCheckState(
		disableServicePassword ? Qt::Checked : Qt::Unchecked
	);

	ui->saveServicePassword->setCheckState(
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

	ui->serviceAddress->setText(serviceAddress);
	ui->servicePort->setText(QString::number(servicePort));

	if(!servicePassword.isEmpty()) {
		ui->disableServicePassword->setCheckState(Qt::Unchecked);
		ui->servicePassword->setPlaceholderText("Password is set");
	}

	settings.beginGroup(dblui::SETTINGS_GROUP_PREFERENCES);

	ui->preferencesUpdateInterval->setCurrentIndex(
		settings.value(dblui::CFG_PREFERENCES_UPDATE_INTERVAL).toInt()
	);

	ui->preferencesEnableStatsUpload->setCheckState(
		settings.value(dblui::CFG_PREFERENCES_ENABLE_STATS_UPLOAD).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	ui->preferencesEnableStatsUniqueID->setCheckState(
		settings.value(dblui::CFG_PREFERENCES_ENABLE_STATS_UNIQUE_ID).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	settings.endGroup();
	// --

	settings.beginGroup(dblui::SETTINGS_GROUP_PREFERENCES);

	ui->enableHttpResponder->setCheckState(
		settings.value(dblui::CFG_HTTP_RESPONDER_ENABLE).toBool()
		? Qt::Checked : Qt::Unchecked
	);

	int status_code = settings.value(dblui::CFG_HTTP_RESPONDER_STATUS_CODE).toInt();

	if(status_code) {
		ui->httpResponderStatusCode->setText(QString::number(status_code));
	}

	QString status_text = settings.value(dblui::CFG_HTTP_RESPONDER_STATUS_TEXT).toString();
	if(!status_text.isEmpty()) {
		ui->httpResponderStatusText->setText(status_text);
	}

	settings.endGroup();
	// --
}

void MainWindow::saveSettings()
{
	bool disableServicePassword = ui->disableServicePassword->isChecked();
	bool saveServicePassword = ui->saveServicePassword->isChecked();

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
	settings.beginGroup(dblui::SETTINGS_GROUP_SERVICE);

	if(disableServicePassword) {
		settings.remove(dblui::CFG_SERVICE_PASSWORD);
	}
	else if(saveServicePassword) {
		std::string password(ui->servicePassword->text().toUtf8().constData());

		settings.setValue(
			dblui::CFG_SERVICE_PASSWORD,
			QString::fromUtf8(dbl::crypto::md5(password).c_str())
		);
	}

	settings.setValue(
		dblui::CFG_SERVICE_ADDRESS,
		ui->serviceAddress->text()
	);

	settings.setValue(
		dblui::CFG_SERVICE_PORT,
		ui->servicePort->text()
	);
	
	settings.endGroup();

	settings.beginGroup(dblui::SETTINGS_GROUP_PREFERENCES);

	settings.setValue(
		dblui::CFG_PREFERENCES_UPDATE_INTERVAL,
		ui->preferencesUpdateInterval->currentIndex()
	);

	settings.setValue(
		dblui::CFG_PREFERENCES_ENABLE_STATS_UPLOAD,
		ui->preferencesEnableStatsUpload->isChecked()
	);

	settings.setValue(
		dblui::CFG_PREFERENCES_ENABLE_STATS_UNIQUE_ID,
		ui->preferencesEnableStatsUniqueID->isChecked()
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
