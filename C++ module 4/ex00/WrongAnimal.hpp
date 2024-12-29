#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class WrongAnimal
{
protected:
	string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal &operator=(const WrongAnimal& other);
	void makeSound(void) const;
	const string& getType(void) const;
	virtual ~WrongAnimal();
};
