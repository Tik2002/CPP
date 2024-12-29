#pragma once

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const string& type);
	WrongCat(const WrongCat& other);
	WrongCat &operator=(const WrongCat& other);
	void makeSound(void) const;
	~WrongCat();
};
