#ifndef SHUNTING_YARD
#define SHUNTING_YARD
#include "Expression.h"
#include <string>
using namespace std;

/*
	This is an experimental class at the moment
	solely for shunting yard implementation
*/

string shuntingYard(string input) {
	string noSpace = removeSpaces(input);
	for (int i = 0; i < input.length; i++) {
		if ()
	}

	return e;
}

string removeSpaces(string input) {
	string noSpace;
	for (int i = 0; i < input.length; i++) {
		if (input[i] != ' ') {
			noSpace += input[i];
		}
	}
	return noSpace;
}
#endif