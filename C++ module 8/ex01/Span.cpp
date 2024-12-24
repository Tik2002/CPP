#include <Span.hpp>

Span::Span() : sh_sp(0), l_sp(0), N(0) {}

Span::Span(unsigned int N) : sh_sp(UINT_MAX), l_sp(0), N(N){}

void Span::addNumber(int nbr)
{
	if (this->N > 0)
	{
		--this->N;
		for (int i = 0; i < static_cast<int>(this->vec.size()); i++)
		{
			unsigned int res = (this->vec[i] > nbr ? this->vec[i] - nbr : nbr - this->vec[i]);
			if (res > this->l_sp)
				this->l_sp = res;
			if (res < this->sh_sp)
				this->sh_sp = res;
		}
		this->vec.push_back(nbr);
	}
	else
	{
		throw Span::VecAlreadyFilled();
	}
}

Span::Span(const Span& other){*this = other;}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->vec = other.vec;
	}
	return *this;
}

unsigned int Span::shortestSpan()
{
	if (this->vec.size() < 2)
	{
		throw Span::TooFewNumbersInVec();
		return (0);
	}
	else
		return this->sh_sp;
}

unsigned int Span::longestSpan()
{
	if (this->vec.size() < 2)
	{
		throw Span::TooFewNumbersInVec();
		return (0);
	}
	else
		return this->l_sp;
}

Span::~Span(){}
