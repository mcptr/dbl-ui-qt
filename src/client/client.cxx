#include "client.hxx"
#include <QThread>
#include <QDebug>

namespace dblui {

bool Client::connect(const std::string& addr, int port, int sec)
{
	session_.reset(new dblclient::Session());
	is_connected_ = false;
	
	int loops = sec * 10;

	while(loops && !is_connected_) {
		try {
			session_->open(addr, port);
			is_connected_ = true;
		}
		catch(const dblclient::DBLClientError& e) {
			QThread::msleep(100);
			loops--;
		}
	}

	return is_connected_;
}

dblclient::Session& Client::session()
{
	return *session_;
}


} // dblui
