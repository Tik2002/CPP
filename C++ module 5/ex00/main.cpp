#include <Bureaucrat.hpp>

using pshurik::Bureaucrat;
using pshurik::cout;
using pshurik::endl;

int main()
{
	try
	{
		Bureaucrat ob("APO", 1235);
		Bureaucrat ob1 = ob;
		cout << ob << endl;
		Bureaucrat ob2("ChLP", 25);
		ob2 = ob1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	system("leaks bureaucrat");
	return 0;
}
