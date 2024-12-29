#include <Harl.hpp>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		clog << "There must be 1 argument.\n";
		return (1);
	}
	// {
		Harl harl;
		harl.complain(av[1]);
	// }
	// {
	// 	Harl harl;
	// 	harl.complain("DEBUG");
	// 	cout << "_______________________________________________________________________\n";
	// 	harl.complain("INFO");
	// 	cout << "_______________________________________________________________________\n";
	// 	harl.complain("WARNING");
	// 	cout << "_______________________________________________________________________\n";
	// 	harl.complain("ERROR");
	// 	cout << "_______________________________________________________________________\n";
	// 	harl.complain("OFF");
	// }
	return (0);
}
