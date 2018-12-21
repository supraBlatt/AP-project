#ifndef MINUS
#define MINUS
#include "BinaryExpression.h"

class Minus : public BinaryExpression {
public:
	double calculate() {
		return left.calculate() - right.calculate();
	}
};
#endif

