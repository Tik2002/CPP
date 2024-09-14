#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Fixed
{
private:
	int	val;
	static const int _bit = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed& other);
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

