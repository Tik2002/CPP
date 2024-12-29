#include <Zombie.hpp>

void	Zombie::announce(void) const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(const string& name) : name(name) {}

Zombie::~Zombie()
{
}
