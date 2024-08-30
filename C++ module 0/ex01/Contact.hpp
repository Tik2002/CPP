#pragma once
#include <iostream>

using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::cin;

class Contact
{
private:
	string name;
	string	s_name;
	string	nickname;
	string	secret;
	string	p_number;
	static void	_set_strings(string &dest, string str);
	static void	_check_phone_number(string &src);
	static string	_string_for_option(string src);
public:
	Contact();
	void	set_contact();
	void	print_contact_list();
	void	print_contact();
	~Contact();
};
