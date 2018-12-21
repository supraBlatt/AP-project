#ifndef LEXER
#define LEXER

#include <string>
#include <vector>
#include <fstream>
using namespace std;

// lexes using an argument line
vector<string> lex(string line);

// lexes using an input file
vector<string> lex(ifstream& f);
#endif