#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::clog;
using std::endl;
using std::mem_fn;

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl();
	void	complain(string level);
	~Harl();
};

