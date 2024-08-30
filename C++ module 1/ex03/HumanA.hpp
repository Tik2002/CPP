#pragma once
#include <Weapon.hpp>


class HumanA
{
private:
	string	name;
	const Weapon*	weapon;
public:
	HumanA(const string& name, const Weapon& weapon);
	void	attack();
	~HumanA();
};



