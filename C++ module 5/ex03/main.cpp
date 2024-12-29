#include <Intern.hpp>

int main()
{
{
	cout << endl;
	cout << "\033[35m***********************************************\033[0m" << endl;
	cout << endl;
	Intern	someRandomIntern;
	AForm*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		cout << *rrf << endl;
	delete rrf;
	}
	cout << endl;
	cout << "\033[35m***********************************************\033[0m" << endl;
	cout << endl;

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Tramp");
		if (rrf)
			cout << *rrf << endl;
		delete rrf;
	}
	cout << endl;
	cout << "\033[35m***********************************************\033[0m" << endl;
	cout << endl;

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Lolita");
		if (rrf)
			cout << *rrf << endl;
		delete rrf;
	}
	cout << endl;
	cout << "\033[35m***********************************************\033[0m" << endl;
	cout << endl;

	{
		cout << endl;
		cout << "\033[35m***********************************************\033[0m" << endl;
		cout << endl;
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("Go away", "Pisciner");
		if (rrf)
			cout << *rrf << endl;
		delete rrf;
	}
	cout << endl;
	cout << "\033[35m***********************************************\033[0m" << endl;
	cout << endl;
	return 0;
}
