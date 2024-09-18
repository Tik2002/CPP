#include <Animal.hpp>

Animal::Animal(const string name) : type(type) {cout << "Animal constructor called" << endl;}

Animal::Animal(const Animal& other)
{
	cout << "Animal Copy constructor called" << endl;
}

Animal &Animal::operator=(const Animal& other)
{
	cout << "Animal Copy assignment called" << endl;
	const_cast<string&>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void Animal::attack(const string& target)
{
	if (this->HP > 0)
	{
		if (this->E > 0)
		{
			cout << "Animal " << this->name << " attacks " << target << ", causing " << this->D << " points of damage!" << endl;
			--this->E;
		}
		else
			cout << "Animal " << this->name << " has no energy left to attack!" << endl;
	}
}

void Animal::takeDamage(unsigned int amount)
{
	if (this->HP > 0)
	{
		cout << "Animal " << this->name << " taked " << amount << " amount of damage!" << endl;
		INT_MAX > amount ? this->HP -= amount : this->HP = 0;
	}
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
