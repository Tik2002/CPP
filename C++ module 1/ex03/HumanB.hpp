#pragma once
#include <Weapon.hpp>

class HumanB
{
private:
	string	name;
	const Weapon 	*weapon;
public:
	HumanB(const string& name);
	void	setWeapon(const Weapon& weapon);
	void	attack() const;
	~HumanB();
};
