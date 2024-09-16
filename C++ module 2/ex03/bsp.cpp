#include <Point.hpp>

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (!Point::__in_row__(a, b, point)
	&& !Point::__in_row__(b, c, point)
	&& !Point::__in_row__(c, a, point)
	&& Point::__in_triangle__(a, b, c, point));
}
