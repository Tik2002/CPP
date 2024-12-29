#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("Australopithecus") {cout << "WrongAnimal default constructor called" << endl;}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	cout << "WrongAnimal Copy constructor called" << endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
	cout << "WrongAnimal Copy assignment called" << endl;
	this->type = other.type;
	return (*this);
}


const string &WrongAnimal::getType(void) const {return this->type;}

void WrongAnimal::makeSound(void) const {cout << "WrongAnimal " << this->type << " has not evolved to make sound..." << endl;}


WrongAnimal::~WrongAnimal(){cout << "WrongAnimal destructor called" << endl;}
