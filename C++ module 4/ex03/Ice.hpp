#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& type);
	Ice& operator=(const Ice& other);
	~Ice();
	const string& getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};
