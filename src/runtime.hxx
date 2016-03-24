#ifndef DBLUI_RUNTIME_HXX
#define DBLUI_RUNTIME_HXX

#include <string>

namespace dblui {
namespace runtime {

class SystemInfo
{
public:
	SystemInfo();
	~SystemInfo() = default;

	inline const std::string& get_os_name() const
	{
		return os_name_;
	}

	inline const std::string& get_os_version() const
	{
		return os_version_;
	}

	inline const std::string& get_os_variant() const
	{
		return os_variant_;
	}

	inline const std::string& get_os_release() const
	{
		return os_release_;
	}

	inline const std::string& get_sys_nodename() const
	{
		return sys_nodename_;
	}

private:
	std::string os_name_;
	std::string os_version_;
	std::string os_variant_;
	std::string os_release_;
	std::string sys_nodename_;
};

} // runtime
} // dblui

#endif
