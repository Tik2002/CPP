#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include <MateriaSource.hpp>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	tmp = src->createMateria("ice");
	bob->equip(tmp);
	*bob = *me;
	delete bob;
	delete me;
	delete src;
	system("leaks game");
	return 0;
}

// int main()
// {
// 	Character he = Character("he");
// 	ICharacter* me = &he;
// 	*me = he
// 	system("leaks game");
// return 0;
// }
