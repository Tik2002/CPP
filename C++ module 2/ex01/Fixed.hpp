#pragma once

#include <iostream>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::roundf;


class Fixed
{
private:
	int	val;
	static const int _bit = 8;

public:
	Fixed();
	Fixed(const int val);
	Fixed(const float f_val);
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed& other);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	int toInt(void) const;
	float toFloat(void) const;
	~Fixed();
};


ostream &operator<<(ostream& os, const Fixed& other);
