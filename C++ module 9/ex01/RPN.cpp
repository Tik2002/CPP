#include <RPN.hpp>

RPN::RPN() : line("Default") {}

RPN::RPN(const string& line) : line(line) {}

RPN::RPN(const RPN& other) : line(other.line){}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->line = other.line;
	return (*this);
}

static bool isOperator(char c){return c == '+' || c == '-' || c == '/' || c == '*';}

void RPN::exec(char c)
{

	if (cal.size() < 2)
		throw std::invalid_argument("Error: bad input.");

	int tmp = cal.top();
	cal.pop();
	if (c == '+')
		cal.top() += tmp;
	else if (c == '-')
		cal.top() -= tmp;
	else if (c == '*')
		cal.top() *= tmp;
	else
		cal.top() /= tmp;
}

void RPN::operator()()
{
	if (line.empty())
		throw std::invalid_argument("Error.");
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line[i] == ' ')
			continue ;
		else if (isOperator(line[i]))
			exec(line[i]);
		else if(std::isdigit(line[i]))
			cal.push(line[i] - 48);
		else
			throw std::invalid_argument("Error: bad argument.");
	}
	cout << cal.top();
}

RPN::~RPN(){}

