#include <HumanA.hpp>

void	HumanA::attack()
{
	cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

HumanA::HumanA(const string& name, const Weapon& weapon):  name(name), weapon(&weapon) {}

HumanA::~HumanA()
{
	this->weapon = nullptr;
}
