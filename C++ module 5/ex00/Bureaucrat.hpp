#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::clog;
using std::endl;
using std::ostream;
using std::exception;

class Bureaucrat
{
protected:
	Bureaucrat();
public:
	Bureaucrat(const string& name, const int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
	const string& getName() const;
	void inc_grade();
	void dec_grade();
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
