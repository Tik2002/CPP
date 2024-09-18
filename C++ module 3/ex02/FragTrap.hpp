#pragma once

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	void highFivesGuys(void);
	~FragTrap();
};