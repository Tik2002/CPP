#include <includes.hpp>

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog("Jake");
		const Animal* i = new Cat("Suzie");
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	cout << "_______________________________________________\n";
	cout << "_______________________________________________\n";
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat("Jake");
		const WrongAnimal* i = new WrongCat("Suzie");
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	return 0;
}
