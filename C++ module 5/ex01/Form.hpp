#pragma once

#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const string& name, const int sign_grade, const int execute_grade);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();
	const string& getName() const;
	bool getSign() const;
	void setSign();
	void beSigned(const Bureaucrat& bur);
	int getSignGrade() const;
	int getExecuteGrade() const;

	struct GradeTooHighException : public exception
	{
		const char* what() const throw() {return "Highest possible grade is 1";}
	};
	struct GradeTooLowException : public exception
	{
		const char* what() const throw() {return "Lowest possible grade is 150";}
	};
private:
	const string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

ostream& operator<<(ostream& os, const Form& obj);
