#ifndef PLUS
#define PLUS
#include "BinaryExpression.h"

class Plus : public BinaryExpression {
public:
	double calculate() {
		return left.calculate() + right.calculate();
	}
};
#endif
