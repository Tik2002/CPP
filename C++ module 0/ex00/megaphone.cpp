/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigpetro <tigpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:46:08 by tigpetro          #+#    #+#             */
/*   Updated: 2024/08/26 17:25:39 by tigpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print(std::string str)
{
	std::cout << str;
}

void	no_input()
{
	print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
}

void	to_upper(std::string &str)
{
	for(int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

bool string_is_space(std::string &str)
{
	for(int i = 0; i < str.length(); i++)
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
		std::string str = av[i];
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
		std::string str = av[i];
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
	std::cout << std::endl;
	return (0);
}
