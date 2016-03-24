#include "mainwindow.hxx"
#include "ui_mainwindow.h"
#include "version.hxx"
#include "runtime.hxx"

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
	ui->softwareName->setText(dblui::SOFTWARE_NAME.c_str());

	QString version = "Version: ";
	version.append(dblui::VERSION_MAJOR);
	version.append(".");
	version.append(dblui::VERSION_MINOR);

	ui->versionLabel->setText(version);

	auto sysinfo = dblui::runtime::SystemInfo();
	ui->osName->setText(sysinfo.get_os_name().c_str());

	QSettings settings("dbl-ui", "ui");

	settings.beginGroup("UI");
	resize(settings.value("size", QSize(400, 400)).toSize());
	move(settings.value("position", QPoint(200, 200)).toPoint());
	bool disableServicePassword = settings.value("disableServicePassword", "").toBool();
	bool saveServicePassword = settings.value("saveServicePassword", "").toBool();

	ui->disableServicePassword->setCheckState(
		disableServicePassword ? Qt::Checked : Qt::Unchecked
	);

	ui->saveServicePassword->setCheckState(
		saveServicePassword ? Qt::Checked : Qt::Unchecked
	);

	settings.endGroup();

	settings.beginGroup("SERVICE");
	QString servicePassword = settings.value("servicePassword", "").toString();
	QString serviceAddress = settings.value("serviceAddress", "127.0.0.1").toString();
	int servicePort = settings.value("servicePort", 7654).toInt();
	settings.endGroup();

	ui->serviceIPAddress->setText(serviceAddress);
	ui->servicePort->setText(QString::number(servicePort));

	if(!servicePassword.isEmpty()) {
		ui->disableServicePassword->setCheckState(Qt::Unchecked);
		ui->servicePassword->setPlaceholderText("Password is set");
	}
}

void MainWindow::saveSettings()
{
	bool disableServicePassword = ui->disableServicePassword->isChecked();
	bool saveServicePassword = ui->saveServicePassword->isChecked();

	QSettings settings("dbl-ui", "ui");

	settings.beginGroup("UI");

	settings.setValue("position", pos());
	settings.setValue("size", size());
	settings.setValue("disableServicePassword", disableServicePassword);
	settings.setValue("saveServicePassword", saveServicePassword);

	settings.endGroup();

	settings.beginGroup("SERVICE");

	if(disableServicePassword) {
		settings.remove("servicePassword");
	}
	else if(saveServicePassword) {
		std::string password(ui->servicePassword->text().toUtf8().constData());

		settings.setValue(
			"servicePassword",
			QString::fromUtf8(dbl::crypto::md5(password).c_str())
		);
	}
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
