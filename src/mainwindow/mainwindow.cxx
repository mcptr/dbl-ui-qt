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

void MainWindow::initialize()
{
	ui->softwareName->setText(dblui::SOFTWARE_NAME.c_str());

	std::string version = "Version: ";
	version.append(std::to_string(dblui::VERSION_MAJOR));
	version.append(".");
	version.append(std::to_string(dblui::VERSION_MINOR));

	ui->versionLabel->setText(version.c_str());

    auto sysinfo = dblui::runtime::SystemInfo();
	ui->osName->setText(sysinfo.get_os_name().c_str());
}

MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::on_applyAllButton_released()
{
	this->setEnabled(0);
}
