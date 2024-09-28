#pragma once

#include <includes.hpp>

class AAnimal
{
protected:
	string type;
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal &operator=(const AAnimal& other);
	virtual void makeSound(void) const = 0;
	const string& getType(void) const;
	virtual ~AAnimal();
};
