#include <Brain.hpp>

Brain::Brain() {cout << "Brain default constructor called" << endl;}

Brain::Brain(const Brain& other)
{
	cout << "Brain Copy constructor called" << endl;
	*this = other;
}

Brain &Brain::operator=(const Brain& other)
{
	cout << "Brain Copy assignment called" << endl;
	if (this != &other)
	{
		string * p = const_cast<string*>(other.ideas);
		std::copy(this->ideas, this->ideas + 100, p);
	}
	return (*this);
}

Brain::~Brain(){cout << "Brain destructor called" << endl;}
