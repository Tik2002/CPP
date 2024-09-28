#include <Dog.hpp>

Dog::Dog() : AAnimal()
{
	cout << "Dog default constructor called" << endl;
	this->type = "Default";
	this->brain = new Brain();
}

Dog::Dog(const string type) : AAnimal()
{
	cout << "Dog constructor called" << endl;
	this->type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal()
{
	cout << "Dog Copy constructor called" << endl;
	*this = other;
}

Dog &Dog::operator=(const Dog& other)
{
	cout << "Dog Copy assignment called" << endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

void Dog::makeSound(void) const {cout << "Dog " << this->type << " barks!" << endl;}


Dog::~Dog()
{
	delete this->brain;
	cout << "Dog destructor called" << endl;
}
