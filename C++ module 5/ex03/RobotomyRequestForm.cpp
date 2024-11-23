#include <RobotomyRequestForm.hpp>

bool RobotomyRequestForm::_probability;

static void	validate(const int grade, const int val)
{
	if (grade < 1)
		throw RobotomyRequestForm::GradeTooHighException();
	if (grade > val)
		val == 72 ? throw RobotomyRequestForm::GradeTooLowException() : throw RobotomyRequestForm::GradeTooLowExceptionExec();
}

RobotomyRequestForm::RobotomyRequestForm() : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(const string& name, const int sign_grade, const int execute_grade) : AForm(name, sign_grade, execute_grade) {validate(sign_grade, 72); validate(execute_grade, 45);}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {*this = other;}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	const_cast<string&>(this->name) = other.name;
	this->is_signed = other.is_signed;
	const_cast<int&>(this->sign_grade) = other.sign_grade;
	const_cast<int&>(this->execute_grade) = other.execute_grade;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(const Bureaucrat& bur) const
{
	if (!this->getSign())
		throw AForm::FormNotSigned();
	if (bur.getGrade() > this->getExecuteGrade())
		throw RobotomyRequestForm::GradeTooLowExceptionExec();
	cout << "DRRRR VJJVJJ, CHKHK DRKHK\n";
	if (RobotomyRequestForm::_probability)
	{
		cout << this->getName() << " has been robotomized successfully\n";
		RobotomyRequestForm::_probability = false;
	}
	else
	{
		clog << this->getName() << " couldn't robotomized\n";
		RobotomyRequestForm::_probability = true;
	}
}

AForm* RobotomyRequestForm::create(const string& name)
{
	return new RobotomyRequestForm(name, 72, 45);
}
