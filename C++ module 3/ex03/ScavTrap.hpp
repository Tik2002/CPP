#pragma once

#include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const string name);
	ScavTrap(const ScavTrap& trap);
	ScavTrap &operator=(const ScavTrap& trap);
	void attack(const string& target);
	void guardGate(void);
	~ScavTrap();
};
