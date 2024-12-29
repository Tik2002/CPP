#pragma once

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	const string _name;
public:
	DiamondTrap();
	DiamondTrap(const string& name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	void whoAmI(void);
	~DiamondTrap();
};
