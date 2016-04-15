#include "worker.hxx"
#include <dbl/status/status.hxx>

#include <QDebug>
#include <QDateTime>
#include <QThread>

namespace dblui {

Worker::Worker(QObject* parent)
	: QObject(parent)
{
}

void Worker::create_connection(
	const QString& qaddr, int port)
{
	address_ = qaddr;
	port_ = port;
	std::string addr = address_.toUtf8().constData();

	emit connection_status(ConnectionStatus::CONNECTING);

	client_.reset(new dblui::Client());
	if(client_->connect(addr, port_, 10)) {
		emit connection_status(ConnectionStatus::CONNECTED);
		load_status();
		load_data();
	}
	else {
		emit connection_status(ConnectionStatus::FAILED);
	}
}

void Worker::load_status()
{
	dbl::status::Status status;

	if(client_->session().get_status(status)) {
		QString server_ident("Server: ");
		server_ident.append(status.os.c_str());
		server_ident.append(" ");
		server_ident.append(status.nodename.c_str());
		emit log(server_ident);

		QString start_time("Server started: ");
		QDateTime timestamp;
		timestamp.setTime_t(status.start_tstamp);
		start_time.append(timestamp.toString(Qt::SystemLocaleShortDate));
		emit log(start_time);

		QString lists("Lists: ");
		lists.append(QString::number(status.total_lists));
		emit log(lists);

		QString domains("Blocked domains: ");
		domains.append(QString::number(status.total_blocked_domains));
		emit log(domains);
	}
}

void Worker::restart_service()
{
	client_->session().send_reload();

	bool failed = true;
	int loops = 5;

	while(failed && loops) {
		try {
			loops--;
			create_connection(address_, port_);
			failed = false;
		}
		catch(const dblclient::DBLClientError& e) {
			qDebug() << e.what();
		}
	}
}

void Worker::load_data()
{
	load_lists();
	load_blocked_domains();
	load_whitelisted_domains();
}

void Worker::load_lists()
{
	emit load_lists(dblui::OperationStatus::OP_IN_PROGRESS);
	emit log("Loading domain lists");

	dblclient::types::DomainListsSet_t lst;

	if(client_->session().get_domain_lists(lst)) {
		emit load_lists(dblui::OperationStatus::OP_SUCCESS);
		emit load_lists(lst);
	}
	else {
		emit log("Failed to load domain lists");
		emit load_lists(dblui::OperationStatus::OP_FAILED);
	}
}

void Worker::load_blocked_domains()
{
	emit load_blocked_domains(dblui::OperationStatus::OP_IN_PROGRESS);
	emit log("Loading domains");

	dblclient::types::DomainSet_t lst;

	if(client_->session().get_blocked_domains(lst)) {
		emit load_blocked_domains(dblui::OperationStatus::OP_SUCCESS);
		emit load_blocked_domains(lst);
	}
	else {
		emit log("Failed to blocked load domains");
		emit load_blocked_domains(dblui::OperationStatus::OP_FAILED);
	}

}

void Worker::load_whitelisted_domains()
{
	emit load_whitelisted_domains(dblui::OperationStatus::OP_IN_PROGRESS);
	emit log("Loading whitelisted domains");

	dblclient::types::DomainSet_t lst;

	if(client_->session().get_whitelisted_domains(lst)) {
		emit load_whitelisted_domains(dblui::OperationStatus::OP_SUCCESS);
		emit load_whitelisted_domains(lst);
	}
	else {
		emit log("Failed to load whitelisted domains");
		emit load_whitelisted_domains(dblui::OperationStatus::OP_FAILED);
	}

}

} // dblui
