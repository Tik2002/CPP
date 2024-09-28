#include <Dog.hpp>
#include <Cat.hpp>

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	Dog *x = new Dog("Jupa");
// 	Dog *y = new Dog("Chlpik");

// 	*x = *y;

// 	delete j;//should not create a leak
// 	delete i;
// 	delete x;
// 	delete y;

// 	return 0;
// }

int main()
{
	AAnimal **arr = new AAnimal*[100];

	Dog x("Jupa");
	Dog *y = &x;
	x = *y;

	for (int i = 0; i < 100; i++)
		i % 2 ? arr[i] = new Dog(): arr[i] = new Cat();
	for (int i = 0; i < 100; i++)
		arr[i]->makeSound();
	for (int i = 0; i < 100; i++)
		delete arr[i];
	delete[] arr;
	return 0;
}
