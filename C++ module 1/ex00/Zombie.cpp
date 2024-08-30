#include <Zombie.hpp>

void	Zombie::announce(void)
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
}
