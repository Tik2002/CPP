#pragma once

#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const string& name, const int sign_grade, const int execute_grade);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();
	const string& getName() const;
	bool getSign() const;
	void beSigned(const Bureaucrat& bur);
	virtual void execute(const Bureaucrat& executor) const = 0;
	int getSignGrade() const;
	int getExecuteGrade() const;

	struct FormNotSigned : public exception
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
protected:
	const string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

ostream& operator<<(ostream& os, const AForm& obj);
