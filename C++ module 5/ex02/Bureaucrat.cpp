#include <Bureaucrat.hpp>

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

void Bureaucrat::signForm(AForm& form)
{
	if (this->getGrade() > form.getSignGrade())
	{
		cout << this->getName() << " couldn't sign " << form.getName() << " because hasn't permission." << endl;
		return ;
	}
	int _signed = form.getSign();
	switch (_signed)
	{
		case 1:
			cout << this->getName() << " couldn't sign " << form.getName() << " because form already signed." << endl;
			break;
		default:
			form.beSigned(*this);
	}

}

Bureaucrat::~Bureaucrat(){}

ostream& operator<<(ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}
