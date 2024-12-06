#include <ScalarConverter.hpp>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		clog << "One argument required!\n";
		return 1;
	}
	ScalarConverter obj;
	ScalarConverter::convert(av[1]);
	return 0;
}
