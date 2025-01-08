#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>
using std::string;
using std::stringstream;
using std::cout;
using std::ifstream;
using std::cin;
using std::clog;
using std::endl;
using std::map;
using std::getline;

enum Months {
		January = 1,
		February,
		March,
		April,
		May,
		June,
		Jule,
		August,
		September,
		October,
		November,
		December
	};

class BitcoinExchange
{
private:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	bool isValidDate(const string& date);

public:
	BitcoinExchange(const string& filename);
	void operator()();
	~BitcoinExchange();
	void exec(ifstream& infile);
	void insert(ifstream& infile);


private:

	const string filename;
	map<string, double>	database;
};
