#include "command.hxx"

#include <iostream>
#include <cstdio>
#include <memory>
#include <unistd.h>

namespace dblui {
namespace command {

int run(const std::string& cmd)
{
	return 1;
}

// std::string run_pipe(const std::string& cmd)
// {
// 	std::string output;
//     std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
//     if(!pipe) {
// 		char buffer[128];
// 		while(!feof(pipe.get())) {
// 			if(fgets(buffer, 512, pipe.get()) != nullptr) {
// 				output.append(buffer);
// 			}
// 		}
// 	}
// 	return output;
// }

} // command
} // dblui
