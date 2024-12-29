#pragma once

#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::clog;
using std::cerr;
using std::cin;
using std::endl;
using std::ostream;
using std::ofstream;
using std::exception;
#include <AForm.hpp>
class AForm;

class Bureaucrat
{
private:
	Bureaucrat();
public:
	Bureaucrat(const string& name, const int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
	const string& getName() const;
	void incGrade();
	void decGrade();
	void signForm(AForm& form);
	void executeForm(AForm& form);
	int getGrade() const;

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
	int grade;
};

ostream& operator<<(ostream& os, const Bureaucrat& obj);

