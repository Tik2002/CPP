#pragma once

#include <ICharacter.hpp>

#ifndef INV_MAX
# define INV_MAX 4
#endif //INV_MAX
class Character : public ICharacter
{
public:
	Character();
	Character(const string& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();
	const string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	string name;
	AMateria *inv[INV_MAX];
	int materia_count;
};
