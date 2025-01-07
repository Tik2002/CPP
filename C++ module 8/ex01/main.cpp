#include <Span.hpp>
int main( void )
{
	try
	{
		Span sp = Span(0);
		sp.addNumber(-6);
		sp.addNumber(-3);
		sp.addNumber(-17);
		sp.addNumber(-9);
		sp.addNumber(-11);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	}
	catch(const exception& e)
	{
		clog << e.what() << endl;
	}
	try
	{
		Span sp = Span(9);
		sp.addNumber(-6);
		sp.addNumber(-3);
		sp.addNumber(-17);
		sp.addNumber(-9);
		sp.addNumber(-11);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	}
	catch(const exception& e)
	{
		clog << e.what() << endl;
	}
	try
	{
		Span sp = Span(11);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(2342);
		sp.addNumber(1412412);
		sp.addNumber(1);
		sp.addNumber(-531);
		sp.addNumber(1135532115);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	}
	catch(const exception& e)
	{
		clog << e.what() << endl;
	}
	return 0;
}
