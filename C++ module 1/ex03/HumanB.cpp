#include <HumanB.hpp>

void	HumanB::attack() const
{
	cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(const string& name): name(name), weapon(nullptr) {}

HumanB::~HumanB()
{
	this->weapon = nullptr;
}

