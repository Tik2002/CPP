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
	~AForm();
	const string& getName() const;
	bool getSign() const;
	void beSigned(const Bureaucrat& bur);
	virtual void execute(const Bureaucrat& executor) const = 0;
	virtual AForm* clone(const string& name) const = 0;
	int getSignGrade() const;
	int getExecuteGrade() const;

	struct FormNotSigned : public exception
	{
		const char* what() const throw() {return "Form doesn't signed";}
	};
	struct GradeTooHighException : public exception
	{
		const char* what() const throw() {return "Highest possible grade is 1";}
	};
	struct GradeTooLowException : public exception
	{
		const char* what() const throw() {return "Lowest possible grade is 150";}
	};
protected:
	const string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

ostream& operator<<(ostream& os, const AForm& obj);
