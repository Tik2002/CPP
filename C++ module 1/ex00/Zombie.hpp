#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
private:
	string	name;
public:

	void	announce(void);

	Zombie(string name);
	~Zombie();
};

Zombie*	newZombie(string name);
void	randomChump(string name);
