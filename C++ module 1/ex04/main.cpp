#include <includes.hpp>

static void validation(int ac, char **av, ifstream& infile)
{
	if (ac != 4)
		throw	std::invalid_argument("There must be 3 arguments.");
	infile.open(av[1]);
	if (!infile.is_open())
		throw	std::invalid_argument("Can't open file " + string(av[1]) + ".");
}

int main(int ac, char **av)
{
	ifstream infile;
	try
	{
		validation(ac, av, infile);
	}
	catch(const std::invalid_argument& e)
	{
		infile.close();
		cout << e.what() << endl;
		return -1;
	}
	string filename = string(av[1]) + ".replace";
	ofstream outfile(filename);
	Functor replace(infile, outfile);
	replace(av[2], av[3]);
	cout << "Test\n";
	infile.close();
	outfile.close();
	return (0);
}
