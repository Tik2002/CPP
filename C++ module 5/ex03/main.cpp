#include <Intern.hpp>

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
		Intern chlpik;
		AForm* form99 = chlpik.makeForm("shrubbery request", "Akckpake");
		ob.executeForm(*form99);
		delete form99;
	}
	catch(const exception& e)
	{
		clog << e.what() << '\n';
	}
	return 0;
}
