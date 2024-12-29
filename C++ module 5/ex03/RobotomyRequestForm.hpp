#pragma once

#include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const string& name, const int sign_grade, const int execute_grade);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm();
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
private:
	static bool _probability;
};
