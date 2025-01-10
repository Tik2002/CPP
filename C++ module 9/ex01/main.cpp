#include <RPN.hpp>

static void validation(int ac)
{
	if (ac != 2)
		throw	std::invalid_argument("Error: one argument required.");
}

int main(int ac, char **av)
{
	try
	{
		validation(ac);
		RPN exec(av[1]);
		exec();
	}
	catch(const std::invalid_argument& e)
	{
		cout << e.what() << endl;
		return -1;
	}
	return (0);
}
