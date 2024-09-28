#include <Character.hpp>

Character::Character() : name("Default"), materia_count(0)
{
	for (int i = 0; i < INV_MAX; i++)
		this->inv[i] = nullptr;
}

Character::Character(const string& name) : name(name), materia_count(0)
{
	for (int i = 0; i < INV_MAX; i++)
		this->inv[i] = nullptr;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character &Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->materia_count = other.materia_count;
		for (int i = 0; i < INV_MAX; i++)
		{
			delete this->inv[i];
			this->inv[i] = (*other.inv[i]).clone();
		}
	}
	return (*this);
}

const string& Character::getName() const {return this->name;}

static bool __check__(int idx) {return idx < INV_MAX;}

void Character::equip(AMateria* m)
{
	if (__check__(this->materia_count))
	{
		for (int i = 0; i < INV_MAX; i++)
		{
			if (this->inv[i] == nullptr)
			{
				this->inv[i] = m;
				++this->materia_count;
				break ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (__check__(idx) && this->inv[idx] != nullptr)
	{
		this->inv[idx] = nullptr;
		--this->materia_count;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (__check__(idx) && this->inv[idx] != nullptr)
		(*this->inv[idx]).use(target);
}

Character::~Character(){}
