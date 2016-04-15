#include "mainwindow/mainwindow.hxx"
#include "client/worker.hxx"
#include "constants.hxx"

#include <dblclient/types.hxx>

#include <QApplication>


int main(int argc, char *argv[])
{
	qRegisterMetaType<dblui::ConnectionStatus>("dblui::ConnectionStatus");
	qRegisterMetaType<dblui::OperationStatus>("dblui::OperationStatus");
	qRegisterMetaType<dblclient::types::DomainListsSet_t>("dblclient::types::DomainListsSet_t");
	qRegisterMetaType<dblclient::types::DomainSet_t>("dblclient::types::DomainSet_t");


	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
