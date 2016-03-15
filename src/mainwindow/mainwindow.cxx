#include "mainwindow.hxx"
#include "ui_mainwindow.h"
#include "version.hxx"
#include "runtime.hxx"

#include <QSystemTrayIcon>
#include <QMenu>
#include <QDebug>
#include <string>
#include <sstream>


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	iface_manager_(std::move(new adblocker::net::IfaceManager()))
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

void MainWindow::initialize()
{
	iface_manager_->load();
	// for(auto iface : iface_manager_->get_list()) {
	// 	if(iface.isValid()) {
	// 		ui->networkInterface->addItem(iface.humanReadableName());
	// 	}
	// }

	ui->softwareName->setText(adblocker::SOFTWARE_NAME.c_str());

	std::string version = "Version: ";
	version.append(std::to_string(adblocker::VERSION_MAJOR));
	version.append(".");
	version.append(std::to_string(adblocker::VERSION_MINOR));

	ui->versionLabel->setText(version.c_str());

	auto sysinfo = adblocker::runtime::SystemInfo();
	ui->osName->setText(sysinfo.get_os_name().c_str());
}

MainWindow::~MainWindow()
{
	iface_manager_.reset(nullptr);
	delete ui;
}

//void MainWindow::on_networkInterface_currentIndexChanged(int idx)
//{
//	// auto iface = iface_manager_->get(idx);
//	// if(!iface.addressEntries().length()) {
//	// 	ui->ipv4Address->clear();
//	// }
//	// else {
//	// 	ui->ipv4Address->setText(
//	// 		iface.addressEntries().at(0).ip().toString()
//	// 	);
//	// }
//}

void MainWindow::on_applyAllButton_released()
{
	this->setEnabled(0);
}
