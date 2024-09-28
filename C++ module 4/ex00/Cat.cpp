#include <Cat.hpp>

Cat::Cat() : Animal()
{
	cout << "Cat default constructor called" << endl;
	this->type = "Default";
}

Cat::Cat(const string type) : Animal()
{
	cout << "Cat constructor called" << endl;
	this->type = type;
}

Cat::Cat(const Cat& other) : Animal()
{
	cout << "Cat Copy constructor called" << endl;
	*this = other;
}

Cat &Cat::operator=(const Cat& other)
{
	cout << "Cat Copy assignment called" << endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const {cout << "Cat " << this->type << " meows!" << endl;}


Cat::~Cat(){cout << "Cat destructor called" << endl;}
