#include "worker.hxx"
#include <dbl/status/status.hxx>

#include <QDebug>
#include <QDateTime>

namespace dblui {

Worker::Worker(QObject* parent)
	: QObject(parent)
{
}

void Worker::create_connection(
	const QString& qaddr, int port)
{
	std::string addr = qaddr.toUtf8().constData();

	client_.reset(new dblui::Client());
	if(client_->connect(addr, port, 50)) {
		qDebug() << "Connected";
		emit connection_status(true);
		load_status();
	}
	else {
		qDebug() << "Connection failed";
		emit connection_status(false);
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

} // dblui
