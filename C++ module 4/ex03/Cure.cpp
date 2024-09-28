#include <Cure.hpp>

Cure::Cure() {this->type = "cure";}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

const string &Cure::getType(void) const {return this->type;}

void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}

Cure *Cure::clone(void) const
{
	Cure *tmp = new Cure();
	return tmp;
}


Cure::~Cure(){}
