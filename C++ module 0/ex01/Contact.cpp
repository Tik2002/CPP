#include <Contact.hpp>

string	Contact::_string_for_option(string src)
{
	string res = src;
	if (res.length() > 10)
		res.replace(res.begin() + 9, res.end(), ".");
	if (res.length() == 10)
		return res;
	res.append(10 - res.length(), ' ');
	return res;
}

void	Contact::_check_phone_number(string &src)
{
	for (size_t i = 0; i < src.length(); i++)
	{
		if(!isdigit(src[i]))
		{
			src.clear();
			return ;
		}
	}
}

void	Contact::_set_strings(string &dest, string str)
{
	dest.clear();
	cout << str << endl;
	while (dest.empty())
	{
		getline (cin,dest,'\n');
		if (!dest.empty())
		{
			for(size_t i = 0; i < dest.length(); i++)
			{
				if (dest[i] != ' ')
					break;
				if (dest[i + 1] == '\0')
					dest.clear();
			}
			if (!dest.empty())
				dest = dest.substr(dest.find_first_not_of(' '), dest.find_last_not_of(' ') + 1);
		}
		if (str == "Enter phone number")
			_check_phone_number(dest);
	}
}

void	Contact::set_contact()
{
	_set_strings(this->name, "Enter name");
	_set_strings(this->s_name, "Enter last name");
	_set_strings(this->nickname, "Enter nickname");
	_set_strings(this->p_number, "Enter phone number");
	_set_strings(this->secret, "Enter secret");
}

void	Contact::print_contact_list()
{
	string o_name = _string_for_option(this->name);
	string o_s_name = _string_for_option(this->s_name);
	string o_nickname = _string_for_option(this->nickname);
	cout << "|" << o_name << "|" << o_s_name << "|" << o_nickname << endl;
}

void	Contact::print_contact()
{
	if (this->name.empty())
		return ;
	cout << "Name\n" << this->name << endl;
	cout << "Last name\n" << this->s_name << endl;
	cout << "Nickname\n" << this->nickname << endl;
	cout << "Phone number\n" << this->p_number << endl;
	cout << "Darkest secret\n" << this->secret << endl;
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
