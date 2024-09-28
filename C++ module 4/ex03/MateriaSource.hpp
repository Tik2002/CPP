#pragma once

#include <IMateriaSource.hpp>
#include <AMateria.hpp>
#ifndef MTR_MAX
# define MTR_MAX 4
#endif //MTR_MAX
class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(const string& type);
private:
	AMateria *arr[MTR_MAX];
	int materia_count;
};

