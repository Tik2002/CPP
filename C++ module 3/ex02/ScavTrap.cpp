#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void) : ClapTrap(){cout << "ScavTrap default constructor called" << endl;}

ScavTrap::ScavTrap(const string name) : ClapTrap(name)
{
	cout << "ScavTrap constructor called" << endl;
	this->HP = 100;
	this->E = 50;
	this->D = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	cout << "ScavTrap Copy constructor called" << endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	cout << "ScavTrap Copy assignment called" << endl;
	const_cast<string&>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void ScavTrap::attack(const string& target)
{
	if (this->HP > 0)
	{
		if (this->E > 0)
		{
			cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->D << " points of damage!" << endl;
			--this->E;
		}
		else
			cout << "ScavTrap " << this->name << " has no energy left to attack!" << endl;
	}
}

void ScavTrap::guardGate(void){cout << "ScavTrap " << this->name; (this->HP > 0) ? cout << " is now in Gate keeper mode!" << endl : cout << " is no longer with us..." << endl;}

ScavTrap::~ScavTrap(){cout << "ScavTrap destructor called" << endl;}
