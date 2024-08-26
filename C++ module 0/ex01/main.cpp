#include "PhoneBook.hpp"

void	add_contact(PhoneBook &book, int i)
{
	book.get_contact(i).set_contact();
}

void	search_contact(PhoneBook &book)
{
	for(int i = 0; i < contact_size; i++)
	{
		std::cout << i + 1 << "   ";
		book.get_contact(i).print_contact_list();
	}
	std::cout << "Choose contact by index" << std::endl;
	int index;
	std::cin >> index;
	if (index > contact_size || index < 1)
		std::cout << "Wrong index!" << std::endl;
	book.get_contact(index - 1).print_contact();
}

int	main()
{
	PhoneBook book;
	int	i = 0;

	std::string input;
	std::cin >> input;
	while (input != "EXIT" && !input.empty())
	{
		if (input == "ADD")
		{
			add_contact(book, i);
			if (++i == contact_size)
				i = 0;
		}
		else if (input == "SEARCH")
			search_contact(book);
		else
			std::cout << "Bad input, your options are ADD, SEARCH or EXIT!" << std::endl;
		std::cin >> input;
	}
	return 0;
}
