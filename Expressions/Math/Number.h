#ifndef NUMBER
#define NUMBER
#include "Expression.h"

class Number : public Expression {
	double num;
public:
	double calculate() {
		return num;
	}
};
#endif

