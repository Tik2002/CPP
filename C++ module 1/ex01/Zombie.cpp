#include <Zombie.hpp>

void	Zombie::announce(void)
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::set_name(string name)
{
	this->name = name;
}

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "Zombie";
}

Zombie::~Zombie()
{
}
