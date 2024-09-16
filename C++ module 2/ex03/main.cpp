#include <Point.hpp>

int main()
{
	Point a(1, 4);
	Point b(3, 6);
	Point c(-3, -10);
	Point(2, -1);

	cout << bsp(a, b, c, Point(2, -1)) << endl;
	cout << bsp(a, b, c, Point(1, 1)) << endl;
	cout << bsp(a, b, c, Point(5, 8)) << endl;
	cout << bsp(a, b, c, Point(1, 2)) << endl;
	cout << bsp(a, b, c, Point(2, 1)) << endl;
	return 0;
}
