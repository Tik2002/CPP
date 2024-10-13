#pragma once

#include <iostream>
namespace pshurik
{
using std::string;
using std::cout;
using std::cin;
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

}

