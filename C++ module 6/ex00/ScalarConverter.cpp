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
	unsigned int i = 0;
	unsigned int len = source.length();
	for (; i < len && MyIsDigit(source[i]); i++);

	if (i < len && source[i] == '.')
		i++;

	if (!MyIsDigit(source[i]))
		return true;

	bool allZero = true;
	for (; i < len ; i++)
	{
		if (MyIsDigit(source[i]))
		{
			if (allZero == true && source[i] != '0')
				allZero = false;
			continue;
		}
		else
			return false || allZero;
	}
	return false || allZero;
}

void ScalarConverter::printFloat(const string& source, bool mod)
{
	char *EOL;

	cout << "Float: " << std::strtof(source.c_str(), &EOL) << (mod ? ".0f\n" : "f\n");

}

void ScalarConverter::printDouble(const string& source, bool mod)
{
	char *EOL;

	cout << "Double: " << std::strtof(source.c_str(), &EOL) << (mod ? ".0\n" : "\n");
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
		bool mod = checkForHardCode(source);
		printFloat(source, mod);
		printDouble(source, mod);
	}
}

// ostream& operator<<(ostream& os, const ScalarConverter& obj)
// {
// 	os << obj.getName() << ", ScalarConverter grade " << obj.getGrade();
// 	return os;
// }
