#ifndef MULT
#define MULT
#include "BinaryExpression.h"

class Mult : public BinaryExpression {
public:
	double calculate() {
		return left.calculate() * right.calculate();
	}
};
#endif

