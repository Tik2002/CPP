#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {*this = other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter&){return (*this);}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::printChar(const string& source)
{
	char res = static_cast<char>(std::atoi(source.c_str()));
	cout << "Char: ";
	if (res < 0)
		cout << "impossible\n";
	else if (res < 32 || res == 127)
		cout << "Non displayable\n";
	else
		cout << "\'" << res << "\'\n";
}

void ScalarConverter::printInt(const string& source)
{
	// int res = source.atoi();
	cout << "Int: " << std::atoi(source.c_str()) << "\n";
}

static bool MyIsDigit(char c)
{
	return (c < 58 && c > 47);
}

static bool checkForHardCode(const string& source)
{
	bool flag = true;
	for (unsigned int i = 0; i < source.length() ; i++)
	{
		if (MyIsDigit(source[i]))
			continue;
		else
		{
			if (source[i] == '.' && flag && i + 1 < source.length())
				flag = false;
			else if (source[i - 1] == '.')
				return true;
		}
	}
	return flag;
}

void ScalarConverter::printFloat(const string& source)
{
	char *EOL;

	cout << "Float: " << std::strtof(source.c_str(), &EOL) << (checkForHardCode(source) ? ".0f\n" : "f\n");

}

void ScalarConverter::printDouble(const string& source)
{
	char *EOL;

	cout << "Double: " << std::strtof(source.c_str(), &EOL) << (checkForHardCode(source) ? ".0\n" : "\n");
}

static void printInf(const string& source)
{
	cout << "Char: " << "impossible\n";
	cout << "Int: " << "impossible\n";
	cout << "Float: " << (source[0] == '-' ? "-" : "+") << "inff\n";
	cout << "Double: " << (source[0] == '-' ? "-" : "+") << "inf\n";

}

static bool checkInf(const string& toCheck)
{
	return (toCheck == "inf" || toCheck == "+inf" || toCheck == "inff" || toCheck == "+inff" || toCheck == "-inf" || toCheck == "-inff");
}

static void printNans()
{
	cout << "Char: " << "impossible\n";
	cout << "Int: " << "impossible\n";
	cout << "Float: " << "nanf\n";
	cout << "Double: " << "nan\n";
}

static bool checkNans(const string& toCheck)
{
	return (toCheck == "nan" || toCheck == "nanf");
}

void ScalarConverter::convert(const string& source)
{
	if (checkNans(source))
		printNans();
	else if (checkInf(source))
		printInf(source);
	else
	{
		printChar(source);
		printInt(source);
		printFloat(source);
		printDouble(source);
	}
}

// ostream& operator<<(ostream& os, const ScalarConverter& obj)
// {
// 	os << obj.getName() << ", ScalarConverter grade " << obj.getGrade();
// 	return os;
// }
