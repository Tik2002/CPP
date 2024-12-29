#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon
{
private:
	string type;
public:
	Weapon();
	Weapon(const string& type);
	string	getType(void) const;
	void	setType(const string& type);
	~Weapon();
};

