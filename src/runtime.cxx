#include "runtime.hxx"
#include <sys/utsname.h>


namespace dblui {
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
} // dblui
