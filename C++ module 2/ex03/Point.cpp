#include <Point.hpp>

Point::Point(){}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::Point(const Point& other)
{
	*this = other;
}

Point &Point::operator=(const Point& other)
{
	const_cast<Fixed&>(this->x) = other.x;
	const_cast<Fixed&>(this->y) = other.y;
	return (*this);
}

Point::~Point(){}
