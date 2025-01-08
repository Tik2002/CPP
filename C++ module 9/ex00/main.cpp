#include <BitcoinExchange.hpp>

static void validation(int ac)
{
	if (ac != 2)
		throw	std::invalid_argument("Error: could not open file.");
}

int main(int ac, char **av)
{
	try
	{
		validation(ac);
		BitcoinExchange exec(av[1]);
		exec();
	}
	catch(const std::invalid_argument& e)
	{
		cout << e.what() << endl;
		return -1;
	}

	return (0);
}
