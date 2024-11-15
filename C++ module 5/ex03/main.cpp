#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main()
{
	try
	{
		Bureaucrat ob("APO", 10);
		RobotomyRequestForm form1("B23", 24, 25);
		cout << form1 << endl;
		ob.executeForm(form1);
		ob.signForm(form1);
		form1.execute(ob);
	}
	catch(const exception& e)
	{
		clog << e.what() << '\n';
	}
	return 0;
}
