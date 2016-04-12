#include "mainwindow/mainwindow.hxx"
#include "client/worker.hxx"

#include <QApplication>
#include <QDebug>
#include <QtConcurrent>
#include <functional>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
