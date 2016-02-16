#ifndef ADBLOCKER_COMMAND_HXX
#define ADBLOCKER_COMMAND_HXX

#include <string>

namespace adblocker {
namespace command {

int run(const std::string& cmd);
//std::string run_pipe(const std::string& cmd);


} // command
} // adblocker

#endif
