#ifndef DIV
#define DIV
#include "BinaryExpression.h"

class Div : public BinaryExpression {
public:
	double calculate() {
		double r = right.calculate();
		if (r == 0) {
			throw "Division by 0 exception";
		}
		return left.calculate() / r;
	}
};
#endif
