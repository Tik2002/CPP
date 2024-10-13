#include <AForm.hpp>

int main()
{
	try
	{
		Bureaucrat ob("APO", 10);
		Bureaucrat ob3("DOG", 13);
		cout << ob << endl;
		Bureaucrat ob2("ChLP", 25);
		AForm form1("B23", 24, 25);
		cout << form1 << endl;
		ob.signForm(form1);
		ob3.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	system("leaks bureaucrat");
	return 0;
}
