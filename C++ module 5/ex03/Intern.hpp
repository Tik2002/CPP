#pragma once

#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#define typeCapacity 3
class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& );
	~Intern();
	AForm* makeForm(const string& FormType, const string& FormName);
};
