#include <Zombie.hpp>

int t_main()
{
	int n = 4;
	Zombie *horde = zombieHorde(n, "SUKA");

	horde[2].announce();
	horde[1].announce();
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (1);
}

int	main()
{
	t_main();
	return (0);
}
