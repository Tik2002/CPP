#include <Animal.hpp>

Animal::Animal() : type("Australopithecus") {cout << "Animal default constructor called" << endl;}

Animal::Animal(const Animal& other)
{
	cout << "Animal Copy constructor called" << endl;
	*this = other;
}

Animal &Animal::operator=(const Animal& other)
{
	cout << "Animal Copy assignment called" << endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}


const string &Animal::getType(void) const {return this->type;}

void Animal::makeSound(void) const {cout << "Animal " << this->type << " has not evolved to make sound..." << endl;}


Animal::~Animal(){cout << "Animal destructor called" << endl;}
