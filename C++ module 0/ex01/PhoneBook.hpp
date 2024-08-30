#include <Contact.hpp>
#define contact_size 8

class PhoneBook
{
private:
	Contact	contacts[contact_size];
public:
	PhoneBook();
	Contact &get_contact(int index);
	~PhoneBook();
};


