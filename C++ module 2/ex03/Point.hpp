#pragma once

#include <Fixed.hpp>

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other);
	Point &operator=(const Point& other);
	static bool __in_triangle__(const Point& a, const Point& b, const Point& c, const Point& point);
	static bool __in_row__(const Point& a, const Point& b, const Point& point);
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
