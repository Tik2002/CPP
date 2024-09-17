#include <FragTrap.hpp>

int main()
{
	FragTrap pers(string("Tika"));
	FragTrap chlp(pers);
	FragTrap agu(string("Tyoma"));
	FragTrap chad("Gigachad");

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
	return 0;
}
