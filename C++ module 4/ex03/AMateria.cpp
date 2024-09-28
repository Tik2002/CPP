#include <AMateria.hpp>

AMateria::AMateria() : type("Unknown") {}

AMateria::AMateria(const string& type) : type(type) {}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

const string &AMateria::getType(void) const {return this->type;}

void AMateria::use(ICharacter& target)
{
	cout << "AMateria use " << this->getType() << " on " << target.getName() << endl;
}

AMateria::~AMateria(){}
