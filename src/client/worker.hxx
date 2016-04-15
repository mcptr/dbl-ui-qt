#ifndef DBLUI_CLIENT_WORKER_HXX
#define DBLUI_CLIENT_WORKER_HXX

#include "client.hxx"
#include "constants.hxx"

#include <QString>
#include <QObject>
#include <QThread>

#include <memory>
#include <atomic>
#include <string>
#include <dblclient/types.hxx>


namespace dblui {

class Worker : public QObject
{
	Q_OBJECT
public:
	explicit Worker(QObject* parent = nullptr);
	~Worker() = default;
signals:
	void log(const QString&);

	void connection_status(dblui::ConnectionStatus);

	void load_lists(dblui::OperationStatus);
	void load_lists(const dblclient::types::DomainListsSet_t&);

	void load_blocked_domains(dblui::OperationStatus);
	void load_blocked_domains(const dblclient::types::DomainSet_t&);

	void load_whitelisted_domains(dblui::OperationStatus);
	void load_whitelisted_domains(const dblclient::types::DomainSet_t&);

public slots:
	void create_connection(const QString& addr, int port);
	void load_status();
	void restart_service();

	void load_data();

private:
	std::unique_ptr<Client> client_;
	QString address_;
	int port_;

	void load_lists();
	void load_blocked_domains();
	void load_whitelisted_domains();
};


} // dblui

#endif
