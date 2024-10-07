#include <Form.hpp>

int main()
{
	try
	{
		Bureaucrat ob("APO", 10);
		Bureaucrat ob1 = ob;
		cout << ob << endl;
		Bureaucrat ob2("ChLP", 25);
		ob2 = ob1;
		Form form1("B23", 150, 150);
		cout << form1 << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	system("leaks bureaucrat");
	return 0;
}
