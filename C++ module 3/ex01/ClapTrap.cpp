#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void) : name(), HP(0), E(0), D(0) {cout << "ClapTrap default constructor called" << endl;}

ClapTrap::ClapTrap(const string& name) : name(name), HP(10), E(10), D(0) {cout << "ClapTrap constructor called" << endl;}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	cout << "ClapTrap Copy constructor called" << endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	cout << "ClapTrap Copy assignment called" << endl;
	const_cast<string&>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void ClapTrap::attack(const string& target)
{
	if (this->HP > 0)
	{
		if (this->E > 0)
		{
			cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->D << " points of damage!" << endl;
			--this->E;
		}
		else
			cout << "ClapTrap " << this->name << " has no energy left to attack!" << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP > 0)
	{
		cout << "ClapTrap " << this->name << " taked " << amount << " amount of damage!" << endl;
		INT_MAX > amount ? this->HP -= amount : this->HP = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP > 0)
	{
		if (this->E > 0)
		{
			cout << "ClapTrap " << this->name << " repaired " << amount << " amount of HP!" << endl;
			--this->E;
			this->HP += amount;
		}
		else
			cout << "ClapTrap " << this->name << " has no energy left to repaire!" << endl;
	}
}


ClapTrap::~ClapTrap(){cout << "ClapTrap destructor called" << endl;}
