#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Animal
{
protected:
	string type;
public:
	Animal(const string name);
	Animal(const Animal& trap);
	Animal &operator=(const Animal& trap);
	void attack(const string& target);
	~Animal();
};
