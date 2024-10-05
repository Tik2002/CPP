#include <Bureaucrat.hpp>
using pshurik::Bureaucrat;
using pshurik::string;
using pshurik::ostream;

static void	validate(const int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const string& name, const int grade) : name(name), grade(grade) {validate(grade);}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {*this = other;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
	const_cast<string&>(this->name) = other.name;
	this->grade = other.grade;
	return (*this);
}

const string& Bureaucrat::getName() const {return this->name;}

int Bureaucrat::getGrade() const {return this->grade;}

void Bureaucrat::dec_grade() {++this->grade;validate(grade);}
void Bureaucrat::inc_grade() {--this->grade;validate(grade);}

Bureaucrat::~Bureaucrat(){}

ostream& pshurik::operator<<(ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}
