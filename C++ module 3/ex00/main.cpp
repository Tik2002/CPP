#include <ClapTrap.hpp>

int main()
{
	ClapTrap pers(string("Tika"));

	for (int i = 0; i < 15; i++)
	{
		pers.takeDamage(UINT_MAX);
		pers.attack("Tyoma");
	}
	return 0;
}
