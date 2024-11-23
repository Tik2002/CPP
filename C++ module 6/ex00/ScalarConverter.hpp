#pragma once

#include <iostream>
#include <sstream>
using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::clog;
using std::endl;
using std::ostream;
using std::exception;

class ScalarConverter
{
public:
	static void convert(const string& source);
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter&);
	~ScalarConverter();
	static void printChar(const string& source);
	static void printInt(const string& source);
	static void printFloat(const string& source);
	static void printDouble(const string& source);
};

// ostream& operator<<(ostream& os, const ScalarConverter& obj);

