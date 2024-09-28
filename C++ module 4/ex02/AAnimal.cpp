#include <AAnimal.hpp>

AAnimal::AAnimal() : type("Australopithecus") {cout << "Animal default constructor called" << endl;}

AAnimal::AAnimal(const AAnimal& other)
{
	cout << "Animal Copy constructor called" << endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal& other)
{
	cout << "Animal Copy assignment called" << endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}


const string &AAnimal::getType(void) const {return this->type;}

void AAnimal::makeSound(void) const {cout << "Animal " << this->type << " has not evolved to make sound..." << endl;}


AAnimal::~AAnimal(){cout << "Animal destructor called" << endl;}
