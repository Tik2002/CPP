#include <Fixed.hpp>

bool Fixed::operator==(const Fixed& other) const
{
	return (this->val == other.val);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return !(*this == other);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->val < other.val);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return !(*this > other);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->val > other.val);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return !(*this < other);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++this->val;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->val++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	--this->val;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->val--;
	return tmp;
}

ostream &operator<<(ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

const Fixed &Fixed::min(const Fixed& left, const Fixed& right)
{
	return (left < right) ? left : right;
}

Fixed &Fixed::min(Fixed& left, Fixed& right)
{
	return (const_cast<Fixed&>(min(static_cast<const Fixed&>(left), static_cast<const Fixed&>(right))));
}

const Fixed &Fixed::max(const Fixed& left, const Fixed& right)
{
	return ((left > right) ? left : right);
}

Fixed &Fixed::max(Fixed& left, Fixed& right)
{
	return (const_cast<Fixed&>(max(static_cast<const Fixed&>(left), static_cast<const Fixed&>(right))));
}

Fixed::Fixed()
{
	this->val = 0;
}

Fixed::Fixed(const int val)
{
	this->val = val << _bit;
}

Fixed::Fixed(const float val)
{
	this->val = roundf(val * (1 << _bit));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	this->val = other.getRawBits();
	return (*this);
}

int Fixed::toInt(void) const
{
	return (this->val >> _bit);
}

float Fixed::toFloat(void) const
{
	return (this->val / float(1 << _bit));
}

int	Fixed::getRawBits(void) const
{
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

Fixed::~Fixed(){}
