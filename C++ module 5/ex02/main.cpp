#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main()
{
	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		try
		{
			ShrubberyCreationForm	form("Tree", 140, 128);
			Bureaucrat				Bot("Bot", 35);

			form.beSigned(Bot);
			form.execute(Bot);
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
	}

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		try
		{
			RobotomyRequestForm		form("Robo", 40, 42);
			Bureaucrat				Bot("Bot", 35);

			form.beSigned(Bot);
			form.execute(Bot);
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
	}

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		try
		{
			RobotomyRequestForm		form("Robo", 65, 35);
			Bureaucrat				Bot("Bot", 34);

			form.beSigned(Bot);
			form.execute(Bot);
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
	}

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		try
		{
			PresidentialPardonForm	form("Franck", 12, 5);
			Bureaucrat				Bot("Bot", 4);

			form.beSigned(Bot);
			cout << form << endl;
			form.execute(Bot);
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
	}
	return 0;
}
