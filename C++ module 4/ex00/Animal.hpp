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
	Animal();
	Animal(const Animal& other);
	Animal &operator=(const Animal& other);
	virtual void makeSound(void) const;
	const string& getType(void) const;
	virtual ~Animal();
};
