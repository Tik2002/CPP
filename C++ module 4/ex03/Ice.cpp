#include <Ice.hpp>

Ice::Ice() {this->type = "ice";}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

const string &Ice::getType(void) const {return this->type;}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

Ice *Ice::clone(void) const {return new Ice();}

Ice::~Ice(){}
