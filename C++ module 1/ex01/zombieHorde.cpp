#include <Zombie.hpp>

Zombie* zombieHorde(int n, const string& name)
{
	if (n < 1)
		return nullptr;
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].set_name(name);
	return (horde);
}
