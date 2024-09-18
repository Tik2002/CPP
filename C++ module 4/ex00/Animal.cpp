#include <Animal.hpp>

Animal::Animal(const string name) : type(type) {cout << "Animal constructor called" << endl;}

Animal::Animal(const Animal& other)
{
	cout << "Animal Copy constructor called" << endl;
}

Animal &Animal::operator=(const Animal& other)
{
	cout << "Animal Copy assignment called" << endl;
	this->name = other.name;
	return (*this);
}

void Animal::beRepaired(unsigned int amount)
{
	if (this->HP > 0)
	{
		if (this->E > 0)
		{
			cout << "Animal " << this->name << " repaired " << amount << " amount of HP!" << endl;
			--this->E;
			this->HP += amount;
		}
		else
			cout << "Animal " << this->name << " has no energy left to repaire!" << endl;
	}
}


Animal::~Animal(){cout << "Animal destructor called" << endl;}
