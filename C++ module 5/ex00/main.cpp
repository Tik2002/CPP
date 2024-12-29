#include <Bureaucrat.hpp>

int main()
{
	{
		Bureaucrat meta("Jake", 120);
		Bureaucrat gama("Bob", 148);

		try
		{
			meta.inc_grade();
			meta.inc_grade();
			meta.inc_grade();
			meta.inc_grade();
			cout << meta.getGrade() << endl;
			cout << meta.getName() << endl;
		}
		catch(exception& e)
		{
			clog << e.what() << '\n';
		}

		try
		{
			gama.dec_grade();
			gama.dec_grade();
			cout << gama.getGrade() << endl;
			gama.dec_grade();
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}
	}

	{
		try {
			Bureaucrat alpha("Seda", 0);
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}

		try {
			Bureaucrat beta("Adel", 155);
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}
		try {
			Bureaucrat delta("Narek", 1);
			delta.inc_grade();
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}
	}
}
