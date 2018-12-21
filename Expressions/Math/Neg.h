#ifndef NEG
#define NEG
#include "UnaryExpression.h"

class Mult : public UnaryExpression {
public:
	double calculate() {
		return -e.calculate();
	}
};
#endif
