#include <ScavTrap.hpp>

int main()
{
	ScavTrap pers(string("Tika"));
	ScavTrap chlp(pers);
	ScavTrap agu(string("Tyoma"));

	agu = chlp;

	for (int i = 0; i < 15; i++)
	{
		agu.takeDamage(UINT_MAX);
		agu.attack("Atika");
		agu.beRepaired(2);
	}
	return 0;
}
