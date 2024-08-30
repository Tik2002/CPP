#include <iostream>

using std::string;
using std::cout;
using std::endl;

void	print(string str)
{
	cout << str;
}

void	no_input()
{
	print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
}

void	to_upper(string &str)
{
	for(size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

bool string_is_space(string &str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			return (false);
	}
	return (true);
}

void	eval(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		string str = av[i];
		if (str.empty() || string_is_space(str))
			continue ;
		str = str.substr(str.find_first_not_of(' '), str.find_last_not_of(' ') + 1);
		if (str.empty())
			continue ;
		to_upper(str);
		print(str);
		if (av[i + 1] != nullptr)
			print(" ");
	}
}

bool check(char **av)
{
	for(int i = 1; av[i]; i++)
	{
		string str = av[i];
		if (str.empty())
			continue ;
		if (!string_is_space(str))
			return (true);
	}
	return (false);
}

int	main(int ac, char **av)
{
	if (ac > 1 && check(av))
		eval(av);
	else
		no_input();
	cout << endl;
	return (0);
}
