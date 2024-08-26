#include "PhoneBook.hpp"


PhoneBook::PhoneBook(/* args */)
{
}

Contact &PhoneBook::get_contact(int index)
{
	return (this->contacts[index]);
}

PhoneBook::~PhoneBook()
{
}
