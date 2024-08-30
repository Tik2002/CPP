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
	Weapon(string type);
	const string&	getType(void) const;
	void			setType(string type);
	~Weapon();
};

