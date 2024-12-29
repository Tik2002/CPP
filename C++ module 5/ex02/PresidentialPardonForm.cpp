#include <PresidentialPardonForm.hpp>

static void	validate(const int grade, const int val)
{
	if (grade < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	if (grade > val)
		val == 25 ? throw PresidentialPardonForm::GradeTooLowException() : throw PresidentialPardonForm::GradeTooLowExceptionExec();
}

const char* PresidentialPardonForm::GradeTooLowExceptionExec::what() const throw() {return "Lowest possible grade for PresidentialPardonForm execution is 5";}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw() {return "Highest possible grade for PresidentialPardonForm signing is 1";}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw() {return "Lowest possible grade for PresidentialPardonForm signing is 25";}

PresidentialPardonForm::PresidentialPardonForm() : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const string& name, const int sign_grade, const int execute_grade) : AForm(name, sign_grade, execute_grade) {validate(sign_grade, 25); validate(execute_grade, 5);}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {*this = other;}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		const_cast<string&>(this->name) = other.name;
		this->is_signed = other.is_signed;
		const_cast<int&>(this->sign_grade) = other.sign_grade;
		const_cast<int&>(this->execute_grade) = other.execute_grade;
	}
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
