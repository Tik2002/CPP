#include <iostream>

class Contact
{
private:
	std::string name;
	std::string	s_name;
	std::string	nickname;
	std::string	secret;
	std::string	p_number;
	static void	set_length(std::string &src);
	static void	set_strings(std::string &dest, std::string str);
	static void	check_phone_number(std::string &src);
public:
	Contact();
	void	set_contact();
	void	print_contact_list();
	void	print_contact();
	~Contact();
};
