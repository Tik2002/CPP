#include <iostream>

using std::cout;
using std::endl;
using std::string;

int	main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "adress of str = " << &str << endl;
	cout << "adress of stringPTR = " << &stringPTR << endl;
	cout << "adress of stringREF = " << &stringREF << endl;


	cout << "value of str = " << str << endl;
	cout << "value of stringPTR = " << stringPTR << endl;
	cout << "value of stringREF = " << stringREF << endl;
	return (0);
}
