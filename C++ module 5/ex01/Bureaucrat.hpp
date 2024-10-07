#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::exception;
#include <Form.hpp>
class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const string& name, const int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
	const string& getName() const;
	void inc_grade();
	void dec_grade();
	void signForm(Form& form);
	int getGrade() const;

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
	int grade;
};

ostream& operator<<(ostream& os, const Bureaucrat& obj);

