#pragma once

#include <includes.hpp>
#include <ICharacter.hpp>

class ICharacter;

class AMateria
{
protected:
	string type;
public:
	AMateria();
	AMateria(const AMateria& type);
	AMateria(const string& type);
	AMateria& operator=(const AMateria& other);
	const string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual ~AMateria();
};
