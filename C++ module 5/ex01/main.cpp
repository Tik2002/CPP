#include <Form.hpp>

int main()
{
	{
		Bureaucrat	meta("Seda", 25);
		Form		form("form", 25 , 75);

		try
		{
			meta.signForm(form);
			cout << form << endl;
		}
		catch(const exception& e)
		{
			clog << e.what() << '\n';
		}

	}

	{
		try {
			Form	alpha("form 1", 0 , 75);
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}

		try {
			Form	alpha("form 2", 75 , 155);
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}
		try {
			Form	alpha("form 3", 75 , 75);
		}
		catch(const exception& e) {
			clog << e.what() << '\n';
		}
	}
	return 0;
}
