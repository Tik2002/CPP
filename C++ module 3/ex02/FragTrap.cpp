#include <FragTrap.hpp>

FragTrap::FragTrap(void) : ClapTrap(){cout << "FragTrap default constructor called" << endl;}

FragTrap::FragTrap(const string name) : ClapTrap(name)
{
	cout << "FragTrap constructor called" << endl;
	this->HP = 100;
	this->E = 100;
	this->D = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap()
{
	cout << "FragTrap Copy constructor called" << endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
	cout << "FragTrap Copy assignment called" << endl;
	const_cast<string&>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void FragTrap::highFivesGuys(void){cout << "FragTrap " << this->name; (this->HP > 0) ? cout << " giving high fives!" << endl : cout <<  " is no longer with us..." << endl;}

FragTrap::~FragTrap(){cout << "FragTrap destructor called" << endl;}
