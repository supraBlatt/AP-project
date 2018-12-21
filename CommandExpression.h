#ifndef COMMAND_EXPRESSION
#define COMMAND_EXPRESSION
#include "Command.h"
#include "Expression.h"

class CommandExpression : public Expression {
	Command c;
public:

	virtual double calculate() {
		return c.execute();
	}
};
#endif
