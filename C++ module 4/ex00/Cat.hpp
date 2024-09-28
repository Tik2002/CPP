#pragma once

#include <Animal.hpp>

class Cat : public Animal
{
public:
	Cat();
	Cat(const string type);
	Cat(const Cat& other);
	Cat &operator=(const Cat& other);
	void makeSound(void) const;
	~Cat();
};
