#include <Weapon.hpp>

string	Weapon::getType(void) const
{
	return (this->type);
}
void	Weapon::setType(const string& type)
{
	this->type = type;
}

Weapon::Weapon(const string& type)
{
	setType(type);
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
