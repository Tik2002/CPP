#include <Intern.hpp>

Intern::Intern() {}


Intern::Intern(const Intern& other) {*this = other;}

Intern &Intern::operator=(const Intern& ){return *this;}

AForm* Intern::makeForm(const string& FormType, const string& FormName)
{
	std::pair<string, void(AForm::*)(const string& name)> arr[typeCapacity];
	arr[0] = std::make_pair("robotomy request", RobotomyRequestForm::create(FormName));
	arr[1] = std::make_pair("presidential request", PresidentialPardonForm::create(FormName));
	arr[2] = std::make_pair("shrubbery request", ShrubberyCreationForm::create(FormName));
	for (int i = 0; i < typeCapacity; i++)
	{
		if (arr[i].first == FormType)
		{
			cout << "Intern creates " << FormName << endl;
 			return arr[i].second();
		}
	}
	clog << "Intern can't create form, because type doesn't match\n";
}

Intern::~Intern(){}
