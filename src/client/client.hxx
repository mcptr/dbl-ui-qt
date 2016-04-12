#ifndef DBLUI_CLIENT_CLIENT_HXX
#define DBLUI_CLIENT_CLIENT_HXX

#include <dblclient/session.hxx>
#include <memory>

namespace dblui {

class Client
{
public:
	Client() = default;
	Client(const Client&) = delete;
	~Client() = default;

	dblclient::Session& session();

	bool connect(const std::string& addr, int port, int loops = 50);

	bool load_status(dbl::status::Status& status);

private:
	std::unique_ptr<dblclient::Session> session_;
	bool is_connected_ = false;
};

} // dblui

#endif
