#include <PhoneBook.hpp>

void	add_contact(PhoneBook &book, int i)
{
	book.get_contact(i).set_contact();
}

bool	check_index(string &index)
{
	return (index.length() == 1 && (index[0] < '9' && index[0] > '0'));
}

void	search_contact(PhoneBook &book)
{
	for(int i = 0; i < contact_size; i++)
	{
		cout << i + 1;
		book.get_contact(i).print_contact_list();
	}
	cout << "Choose contact by index" << endl;
	string index;
	getline(cin,index,'\n');
	while (!check_index(index))
	{
		cout << "Wrong index!" << endl;
		getline (cin,index,'\n');
	}
	book.get_contact(index[0] - 49).print_contact();
}

int	main()
{
	PhoneBook book;
	int	i = 0;

	string input;
	getline (cin,input,'\n');
	while (input != "EXIT")
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
		{
			input.clear();
			cout << "Bad input, your options are ADD, SEARCH or EXIT!" << endl;
		}
		getline (cin,input,'\n');
		while(input.empty())
			getline (cin,input,'\n');
	}
	return 0;
}
