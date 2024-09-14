#include <Fixed.hpp>

ostream &operator<<(ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->val = 0;
}

Fixed::Fixed(const int val)
{
	cout << "Int constructor called" << endl;
	this->val = val << _bit;
}

Fixed::Fixed(const float val)
{
	this->val = roundf(val * (1 << _bit));
	cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed& other)
{
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	this->val = other.getRawBits();
	cout << "Copy assignment operator called" << endl;
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

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}
