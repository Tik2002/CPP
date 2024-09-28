#include <Cat.hpp>

Cat::Cat() : Animal()
{
	cout << "Cat default constructor called" << endl;
	this->type = "Default";
	this->brain = new Brain();
}

Cat::Cat(const string type) : Animal()
{
	cout << "Cat constructor called" << endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal()
{
	cout << "Cat Copy constructor called" << endl;
	*this = other;
}

Cat &Cat::operator=(const Cat& other)
{
	cout << "Cat Copy assignment called" << endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

void Cat::makeSound(void) const {cout << "Cat " << this->type << " meows!" << endl;}


Cat::~Cat()
{
	delete this->brain;
	cout << "Cat destructor called" << endl;
}
