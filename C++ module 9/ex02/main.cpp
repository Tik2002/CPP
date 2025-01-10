#include <PmergeMe.hpp>

int main(int ac, char **av)
{
	try
	{
		PmergeMe::sort(ac, av);
	}
	catch(const std::invalid_argument& e)
	{
		cout << e.what() << endl;
		return -1;
	}
	return (0);
}
