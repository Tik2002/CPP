#include <Form.hpp>

static void	validate(const int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : name("Default"), is_signed(false), sign_grade(150), execute_grade(150)  {}

Form::Form(const string& name, const int sign_grade, const int execute_grade) : name(name), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade) {validate(sign_grade); validate(execute_grade);}

Form::Form(const Form& other) : sign_grade(150), execute_grade(150) {*this = other;}

Form &Form::operator=(const Form& other)
{
	const_cast<string&>(this->name) = other.name;
	this->is_signed = other.is_signed;
	const_cast<int&>(this->sign_grade) = other.sign_grade;
	const_cast<int&>(this->execute_grade) = other.execute_grade;
	return (*this);
}

const string& Form::getName() const {return this->name;}

bool Form::getSign() const {return this->is_signed;}

int Form::getSignGrade() const {return this->sign_grade;}

int Form::getExecuteGrade() const {return this->execute_grade;}

void Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

Form::~Form(){}

ostream& operator<<(ostream& os, const Form& obj)
{
	os << "Form " << obj.getName() << ", signing grade " << obj.getSignGrade()
	<< ", executing grade " << obj.getExecuteGrade() << (obj.getSign() ? ", is signed" : ", isn't signed");
	return os;
}
