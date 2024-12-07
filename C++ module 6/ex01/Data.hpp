#pragma once

#include <include.hpp>

class Data
{
public:
	Data();
	Data(const int nbr);
	Data(const Data& other);
	Data& operator=(const Data&);
	~Data();
private:
	int	nbr;
};
