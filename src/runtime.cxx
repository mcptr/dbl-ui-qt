#include "runtime.hxx"
#include <sys/utsname.h>


namespace adblocker {
namespace runtime {

SystemInfo::SystemInfo()
{
	struct utsname buffer;
	if(uname(&buffer) == 0) {
		os_name_.assign(buffer.sysname);
		os_release_.assign(buffer.release);
		os_version_.assign(buffer.version);
		sys_nodename_.assign(buffer.nodename);
	}
}

} // runtime
} // adblocker
