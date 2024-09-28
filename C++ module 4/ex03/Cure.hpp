#pragma once

#include <AMateria.hpp>
#include <ICharacter.hpp>

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& type);
	Cure& operator=(const Cure& other);
	~Cure();
	const string& getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};
