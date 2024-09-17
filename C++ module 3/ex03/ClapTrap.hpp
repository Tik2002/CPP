#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class ClapTrap
{
protected:
	const string name;
	int	HP;
	int	E;
	int	D;
public:
	ClapTrap(void);
	ClapTrap(const string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap &operator=(const ClapTrap& other);
	virtual void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual ~ClapTrap();
};
