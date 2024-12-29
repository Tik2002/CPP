#pragma once

#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
private:
	Form();
public:
	Form(const string& name, const int sign_grade, const int execute_grade);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();
	const string& getName() const;
	bool getSign() const;
	void beSigned(const Bureaucrat& bur);
	int getSignGrade() const;
	int getExecuteGrade() const;

	struct GradeTooHighException : public exception
	{
		const char* what() const throw();
	};
	struct GradeTooLowException : public exception
	{
		const char* what() const throw();
	};
private:
	const string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

ostream& operator<<(ostream& os, const Form& obj);
