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
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		clog << e.what() << endl;
	}
	return 0;
}
