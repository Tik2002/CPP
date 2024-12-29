#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal()
{
	cout << "WrongCat default constructor called" << endl;
	this->type = "Default";
}

WrongCat::WrongCat(const string& type) : WrongAnimal()
{
	cout << "WrongCat constructor called" << endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	cout << "WrongCat Copy constructor called" << endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
	cout << "WrongCat Copy assignment called" << endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const {cout << "WrongCat " << this->type << " meows!" << endl;}


WrongCat::~WrongCat(){cout << "WrongCat destructor called" << endl;}
