#ifndef COMMAND
#define COMMAND

#include <vector>
#include <string>
using namespace std;

class Command {
public:

	// the returned int is how many parameters did we take from parameters
	// so that in the parser we could continue from beyond them
	virtual int execute() = 0;
};
#endif
