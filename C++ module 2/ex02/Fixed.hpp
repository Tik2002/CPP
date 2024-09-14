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
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator>(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);
	Fixed operator/(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	float toFloat(void) const;
	int toInt( void ) const;
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();


	static const Fixed &min(const Fixed& left, const Fixed& right);
	static Fixed &min(Fixed& left, Fixed& right);
	static const Fixed &max(const Fixed& left, const Fixed& right);
	static Fixed &max(Fixed& left, Fixed& right);
};

ostream &operator<<(ostream& os, const Fixed& other);
