#ifndef BINARY_EXPRESSION
#define BINARY_EXPRESSION
#include "Expression.h"

class BinaryExpression : public Expression {
protected:
	Expression left;
	Expression right;
};
#endif
