#include <Zombie.hpp>

int t_main()
{
	Zombie *first = newZombie("Tyom");
	Zombie *second = newZombie("Mash");
	Zombie *third = newZombie("Aram");

	first->announce();
	randomChump("Tiko");
	second->announce();
	third->announce();
	delete[] first;
	delete[] second;
	delete[] third;
	return (1);
}

int	main()
{
	t_main();
	return (0);
}
