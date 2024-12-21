#include <easyfind.hpp>
int main( void )
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	cout << *easyfind(vec, 32) << endl;

	return 0;
}
