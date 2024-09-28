#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include <MateriaSource.hpp>

// int main()
// {
// 	Character def;
// 	Ice ob1;
// 	Ice ob2;
// 	Ice ob3;
// 	Ice ob4;
// 	Ice ob5;

// 	def.equip(&ob1);
// 	def.equip(ob2.clone());
// 	def.equip(ob3.clone());
// 	def.unequip(2);
// 	def.equip(ob4.clone());
// 	def.equip(ob5.clone());
// 	Character def2 = def;
// 	def2.use(2, def);
// 	system("leaks game");
// }

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
delete bob;
delete me;
delete src;
	system("leaks game");
return 0;
}
