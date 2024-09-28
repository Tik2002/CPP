#pragma once

#include <Animal.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(const string type);
	Dog(const Dog& other);
	Dog &operator=(const Dog& other);
	void makeSound(void) const;
	~Dog();
};
