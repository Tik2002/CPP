#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using std::string;
using std::cout;
using std::exception;
using std::cin;
using std::clog;
using std::endl;

class Span
{
private:
	Span();
public:
	Span(unsigned int N);
	void addNumber(int);
	Span(const Span& other);
	Span& operator=(const Span& other);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	~Span();
	struct VecAlreadyFilled : public std::exception
	{
		const char* what() const throw() {return "Span already filled to up.";}
	};
	struct TooFewNumbersInVec : public std::exception
	{
		const char* what() const throw() {return "There are no few numbers to compare.";}
	};
private:
	unsigned int sh_sp;
	unsigned int l_sp;
	unsigned int N;
	std::vector<int> vec;
};
