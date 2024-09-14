#include <Fixed.hpp>

Fixed::Fixed()
{
	this->val = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& other)
{
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	cout << "Copy assignment operator called" << endl;
	this->val = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->val = raw;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}
