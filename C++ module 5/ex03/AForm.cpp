#include <AForm.hpp>

static void	validate(const int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm() : name("Default"), is_signed(false), sign_grade(150), execute_grade(150)  {}

AForm::AForm(const string& name, const int sign_grade, const int execute_grade) : name(name), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade) {validate(sign_grade); validate(execute_grade);}

AForm::AForm(const AForm& other) : sign_grade(150), execute_grade(150) {*this = other;}

AForm &AForm::operator=(const AForm& other)
{
	const_cast<string&>(this->name) = other.name;
	this->is_signed = other.is_signed;
	const_cast<int&>(this->sign_grade) = other.sign_grade;
	const_cast<int&>(this->execute_grade) = other.execute_grade;
	return (*this);
}

const string& AForm::getName() const {return this->name;}

bool AForm::getSign() const {return this->is_signed;}

int AForm::getSignGrade() const {return this->sign_grade;}

int AForm::getExecuteGrade() const {return this->execute_grade;}

void AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	this->is_signed = true;
}

AForm::~AForm(){}

ostream& operator<<(ostream& os, const AForm& obj)
{
	os << "Form " << obj.getName() << ", signing grade " << obj.getSignGrade()
	<< ", executing grade " << obj.getExecuteGrade() << (obj.getSign() ? ", is signed" : ", isn't signed");
	return os;
}
