#include <Whatever.hpp>

int main( void ) {
	int a = 2;
	int b = 3;
	MyFuncs::swap( a, b );
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << MyFuncs::min( a, b ) << endl;
	cout << "max( a, b ) = " << MyFuncs::max( a, b ) << endl;
	string c = "chaine1";
	string d = "chaine2";
	MyFuncs::swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << MyFuncs::min( c, d ) << endl;
	cout << "max( c, d ) = " << MyFuncs::max( c, d ) << endl;
return 0;
}
