#pragma once

#include <includes.hpp>

class Brain
{
protected:
	string ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	Brain &operator=(const Brain& other);
	~Brain();
};
