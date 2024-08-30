#include <Weapon.hpp>

const string&	Weapon::getType(void) const
{
	return (this->type);
}
void	Weapon::setType(string type)
{
	this->type = type;
}

Weapon::Weapon(string type)
{
	setType(type);
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
