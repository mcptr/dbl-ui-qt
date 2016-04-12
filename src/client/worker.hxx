#ifndef DBLUI_CLIENT_WORKER_HXX
#define DBLUI_CLIENT_WORKER_HXX

#include "client.hxx"

#include <QString>
#include <QObject>
#include <QThread>

#include <memory>
#include <atomic>
#include <string>


namespace dblui {

class Worker : public QObject
{
	Q_OBJECT
public:
	explicit Worker(QObject* parent = nullptr);
	~Worker() = default;
signals:
	void connection_status(bool);
	void log(const QString&);
public slots:
	void create_connection(const QString& addr, int port);
	void load_status();
private:
	std::unique_ptr<Client> client_;
};


} // dblui

#endif
