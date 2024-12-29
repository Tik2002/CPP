#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
public:
	void	announce(void) const;
	void	set_name(const string& name);
	Zombie(void);
	Zombie(const string& name);
	~Zombie();
private:
	const string name;
};

Zombie* zombieHorde(int n, const string& name);
