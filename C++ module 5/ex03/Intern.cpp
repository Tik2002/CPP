#include <Intern.hpp>

Intern::Intern() {}


Intern::Intern(const Intern& other) {*this = other;}

Intern &Intern::operator=(const Intern& ){return *this;}

AForm* Intern::makeForm(const string& FormType, const string& FormName)
{
	std::pair<string, AForm*(*)(const string&)> arr[typeCapacity];
	arr[0] = std::make_pair("robotomy request", &RobotomyRequestForm::create);
	arr[1] = std::make_pair("presidential request", &PresidentialPardonForm::create);
	arr[2] = std::make_pair("shrubbery request", &ShrubberyCreationForm::create);
	for (int i = 0; i < typeCapacity; i++)
	{
		if (arr[i].first == FormType)
		{
			cout << "Intern creates " << FormName << endl;
 			return arr[i].second(FormName);
		}
	}
	clog << "Intern can't create form, because type doesn't match\n";
	return nullptr;
}

Intern::~Intern(){}
