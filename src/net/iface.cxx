#include "iface.hxx"
#include <QDebug>

namespace adblocker {
namespace net {

IfaceManager::~IfaceManager()
{
}

void IfaceManager::load()
{
	list_ = QNetworkInterface::allInterfaces();
}

const QNetworkInterface& IfaceManager::get(int idx) const
{
	return list_.at(idx);
}

} // net
} // adblocker
