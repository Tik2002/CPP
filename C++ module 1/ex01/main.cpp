#include <Zombie.hpp>

int t_main()
{
	int n = 4;
	Zombie *horde = zombieHorde(n, "Zomboid");

	horde[2].announce();
	horde[1].announce();
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	Zombie Tiko("Tiko");
	Tiko.announce();
	Tiko.set_name("Chlpik");
	Tiko.announce();
	return (0);
}

int	main()
{
	t_main();
	return (0);
}
