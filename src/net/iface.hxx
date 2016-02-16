#ifndef ADBLOCKER_NET_IFACE_HXX
#define ADBLOCKER_NET_IFACE_HXX

#include <memory>
#include <QList>
#include <QNetworkInterface>


namespace adblocker {
namespace net {


class IfaceManager {
public:
	virtual ~IfaceManager();

	void load();

	inline
	const QList<QNetworkInterface>& get_list() const
	{
		return list_;
	}

	const QNetworkInterface& get(int idx) const;

private:
	QList<QNetworkInterface> list_;
};

} // net
} // adblocker

#endif
