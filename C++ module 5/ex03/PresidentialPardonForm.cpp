#include <PresidentialPardonForm.hpp>

static void	validate(const int grade, const int val)
{
	if (grade < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	if (grade > val)
		val == 25 ? throw PresidentialPardonForm::GradeTooLowException() : throw PresidentialPardonForm::GradeTooLowExceptionExec();
}

PresidentialPardonForm::PresidentialPardonForm() : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const string& name, const int sign_grade, const int execute_grade) : AForm(name, sign_grade, execute_grade) {validate(sign_grade, 25); validate(execute_grade, 5);}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {*this = other;}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	const_cast<string&>(this->name) = other.name;
	this->is_signed = other.is_signed;
	const_cast<int&>(this->sign_grade) = other.sign_grade;
	const_cast<int&>(this->execute_grade) = other.execute_grade;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(const Bureaucrat& bur) const
{
	if (!this->getSign())
		throw AForm::FormNotSigned();
	if (bur.getGrade() > this->getExecuteGrade())
		throw PresidentialPardonForm::GradeTooLowExceptionExec();
	cout << this->name << " has been pardoned by Zaphod Beeblebrox.\n";
}

AForm* PresidentialPardonForm::create(const string& name)
{
	return (new PresidentialPardonForm(name, 25, 5));
}
