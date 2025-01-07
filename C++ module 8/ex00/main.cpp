#include <easyfind.hpp>

int main( void )
{
	vector<int> vec;
	try
	{
		cout << *easyfind(vec, 2) << endl;
	}
	catch(const exception& e)
	{
		clog << e.what() << '\n';
	}

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	try
	{
		cout << *easyfind(vec, 2) << endl;
		cout << *easyfind(vec, 32) << endl;
	}
	catch(const exception& e)
	{
		clog << e.what() << '\n';
	}
	return 0;
}
