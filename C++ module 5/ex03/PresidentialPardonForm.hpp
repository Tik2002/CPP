#pragma once

#include <AForm.hpp>

class PresidentialPardonForm : public AForm
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const string& name, const int sign_grade, const int execute_grade);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	static AForm* create(const string& name);
	void execute(const Bureaucrat& bur) const;

	struct GradeTooLowExceptionExec : public exception
	{
		const char* what() const throw();
	};
	struct GradeTooHighException : public exception
	{
		const char* what() const throw();
	};
	struct GradeTooLowException : public exception
	{
		const char* what() const throw();
	};
};
