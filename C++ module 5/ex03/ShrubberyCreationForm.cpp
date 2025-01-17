#include <ShrubberyCreationForm.hpp>

static void	validate(const int grade, const int val)
{
	if (grade < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	if (grade > val)
		val == 145 ? throw ShrubberyCreationForm::GradeTooLowException() : throw ShrubberyCreationForm::GradeTooLowExceptionExec();
}

const char* ShrubberyCreationForm::GradeTooLowExceptionExec::what() const throw() {return "Lowest possible grade for ShrubberyCreationForm execution is 137";}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw() {return "Highest possible grade for ShrubberyCreationForm signing is 1";}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() {return "Lowest possible grade for ShrubberyCreationForm signing is 145";}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const string& name, const int sign_grade, const int execute_grade) : AForm(name, sign_grade, execute_grade) {validate(sign_grade, 145); validate(execute_grade, 137);}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {*this = other;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
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

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(const Bureaucrat& bur) const
{
	if (!this->getSign())
		throw AForm::FormNotSigned();
	if (bur.getGrade() > this->getExecuteGrade())
		throw ShrubberyCreationForm::GradeTooLowExceptionExec();
	ofstream outfile(this->getName() + "_shrubbery");
	if (outfile.is_open())
	{
		outfile << shrek;
		outfile.close();
	}
	else
		clog << "Wrong permissions of file\n";
}

AForm* ShrubberyCreationForm::create(const string& name)
{
	return new ShrubberyCreationForm(name, 145, 137);
}
