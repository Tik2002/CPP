#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class ClapTrap
{
private:
	const string name;
	int	HP;
	int	E;
	int	D;
public:
	ClapTrap(const string& name);
	ClapTrap(const ClapTrap& trap);
	ClapTrap &operator=(const ClapTrap& trap);
	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};
