#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(void) : ClapTrap(), _name() {cout << "DiamondTrap default constructor called" << endl;}

DiamondTrap::DiamondTrap(const string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	cout << "DiamondTrap constructor called" << endl;
	this->HP = 100;
	this->E = 50;
	this->D = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap()
{
	cout << "DiamondTrap Copy constructor called" << endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other)
{
	cout << "DiamondTrap Copy assignment called" << endl;
	const_cast<string&>(this->_name) = other._name;
	const_cast<string&>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	if (this->HP > 0)
		cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << this->name << "!" << endl;
}

DiamondTrap::~DiamondTrap(){cout << "DiamondTrap destructor called" << endl;}
