#include <Dog.hpp>

Dog::Dog() : Animal()
{
	cout << "Dog default constructor called" << endl;
	this->type = "Default";
}

Dog::Dog(const string type) : Animal()
{
	cout << "Dog constructor called" << endl;
	this->type = type;
}

Dog::Dog(const Dog& other) : Animal()
{
	cout << "Dog Copy constructor called" << endl;
	*this = other;
}

Dog &Dog::operator=(const Dog& other)
{
	cout << "Dog Copy assignment called" << endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const {cout << "Dog " << this->type << " barks!" << endl;}


Dog::~Dog(){cout << "Dog destructor called" << endl;}
