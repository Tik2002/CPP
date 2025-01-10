#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
using std::string;
using std::cout;
using std::stack;
using std::cin;
using std::clog;
using std::endl;

class RPN
{
private:
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	void exec(char c);

public:
	RPN(const string& line);
	void operator()();
	~RPN();

private:
	string line;
	stack<int>	cal;
};
