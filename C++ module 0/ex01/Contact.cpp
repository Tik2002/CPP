#include "Contact.hpp"

void	Contact::set_length(std::string &src)
{
	if (src.length() > 10)
		src.replace(src.begin() + 9, src.end(), ".");
	if (src.length() == 10)
		return ;
	src.append(10 - src.length(), ' ');
}

void	Contact::check_phone_number(std::string &src)
{
	for (int i = 0; i < src.length(); i++)
	{
		if(!isdigit(src[i]))
		{
			src.clear();
			return ;
		}
	}
}

void	Contact::set_strings(std::string &dest, std::string str)
{
	dest.clear();
	while (dest.empty())
	{
		std::cout << str << std::endl;
		std::cin >> dest;
		if (str == "Enter phone number")
			check_phone_number(dest);
	}
	set_length(dest);
}

void	Contact::set_contact()
{
	set_strings(this->name, "Enter name");
	set_strings(this->s_name, "Enter last name");
	set_strings(this->nickname, "Enter nickname");
	set_strings(this->p_number, "Enter phone number");
	set_strings(this->secret, "Enter secret");
}

void	Contact::print_contact_list()
{
	std::cout << "|" << this->name << "|" << this->s_name << "|" << this->nickname << std::endl;
}

void	Contact::print_contact()
{
	std::cout << this->name << std::endl;
	std::cout << this->s_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->p_number << std::endl;
	std::cout << this->secret << std::endl;
}

Contact::Contact()
{
	this->name = "";
	this->s_name = "";
	this->nickname = "";
	this->secret = "";
	this->p_number = "";
}

Contact::~Contact()
{
}
