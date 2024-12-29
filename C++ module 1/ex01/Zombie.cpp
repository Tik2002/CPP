#include <Zombie.hpp>

void	Zombie::announce(void) const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::set_name(const string& name)
{
	const_cast<string&>(this->name) = name;
}

Zombie::Zombie(const string& name) : name(name) {}

Zombie::Zombie(void) : name("Zombie") {}

Zombie::~Zombie() {}
