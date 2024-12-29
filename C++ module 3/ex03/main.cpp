#include <DiamondTrap.hpp>

int main()
{
	DiamondTrap pers(string("Tika"));

	DiamondTrap chlp(pers);
	DiamondTrap agu(string("Tyoma"));
	DiamondTrap chad("Gigachad");

	agu = chlp;

	for (int i = 0; i < 15; i++)
	{
		agu.takeDamage(UINT_MAX);
		agu.attack("Atika");
		agu.beRepaired(2);
		agu.highFivesGuys();
		chad.takeDamage(1);
		chad.attack("Atika");
		chad.beRepaired(1);
		chad.highFivesGuys();
	}
	chad.whoAmI();
	return 0;
}
