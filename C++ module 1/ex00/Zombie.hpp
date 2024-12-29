#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
public:

	void	announce(void) const;

	Zombie(const string& name);
	~Zombie();
private:
	const string &name;
};

Zombie*	newZombie(string name);
void	randomChump(string name);
