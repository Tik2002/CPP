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
	void	set_name(string name);
	Zombie(void);
	Zombie(string name);
	~Zombie();
};

Zombie* zombieHorde(int n, string name);
