#include <MateriaSource.hpp>

MateriaSource::MateriaSource() : materia_count(0)
{
	for (int i = 0; i < MTR_MAX; i++)
		this->arr[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		this->materia_count = other.materia_count;
		for (int i = 0; i < MTR_MAX; i++)
			this->arr[i] = (*other.arr[i]).clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MTR_MAX; i++)
	{
		if (this->arr[i] == nullptr)
		{
			this->arr[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(const string& type)
{
	for (int i = 0; i < MTR_MAX && this->arr[i] != nullptr; i++)
	{
		if (this->arr[i]->getType() == type)
			return this->arr[i]->clone();
	}
	return (nullptr);
}

MateriaSource::~MateriaSource()
{
}
