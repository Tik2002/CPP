#pragma once

#include <includes.hpp>

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
