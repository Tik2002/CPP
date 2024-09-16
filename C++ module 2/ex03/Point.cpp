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

bool Point::__in_row__(const Point& a, const Point& b, const Point& point)
{
	return ((b.y - a.y)*(point.x - a.x) == (point.y - a.y)*(b.x - a.x));
}

static const Fixed __module__(const Fixed& point)
{
	return (point < 0 ? point * -1 : point);
}

bool Point::__in_triangle__(const Point& a, const Point& b, const Point& c, const Point& point)
{
	Fixed res = __module__(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
	Fixed x = __module__(point.x * (b.y - c.y) + b.x * (c.y - point.y) + c.x * (point.y - b.y));
	Fixed y = __module__(a.x * (point.y - c.y) + point.x * (c.y - a.y) + c.x * (a.y - point.y));
	Fixed z = __module__(a.x * (b.y - point.y) + b.x * (point.y - a.y) + point.x * (a.y - b.y));
	return (res == (x + y + z));
}

Point::~Point(){}
