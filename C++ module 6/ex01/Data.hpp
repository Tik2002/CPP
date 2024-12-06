#pragma once

class Data
{
public:
	Data();
	Data(const Data& other);
	Data& operator=(const Data&);
	~Data();
private:
	int	nbr;
};
