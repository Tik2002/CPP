#pragma once

#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
private:
	AForm();
public:
	AForm(const string& name, const int sign_grade, const int execute_grade);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	~AForm();
	const string& getName() const;
	bool getSign() const;
	void beSigned(const Bureaucrat& bur);
	virtual void executed(const Bureaucrat& bur) = 0;
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

ostream& operator<<(ostream& os, const AForm& obj);
