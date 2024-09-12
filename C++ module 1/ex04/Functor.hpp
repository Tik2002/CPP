#pragma once

#include <includes.hpp>

class Functor
{
private:
	ifstream &infile __attribute__((unused));
	ofstream &outfile __attribute__((unused));

public:
	Functor(ifstream &in, ofstream &out);
	void	operator()(const string &to_replace, const string &replace_with);
	~Functor();
};

