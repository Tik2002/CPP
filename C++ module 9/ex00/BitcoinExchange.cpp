#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange() : filename("Default") {}

BitcoinExchange::BitcoinExchange(const string& filename) : filename(filename)
{
	ifstream infile;

	infile.open("data.csv");
	if (!infile.is_open() || infile.eof())
		throw	std::invalid_argument("Error: could not open file.");
	insert(infile);
	infile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : filename(other.filename), database(other.database){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		const_cast<string&>(this->filename) = other.filename;
		this->database = other.database;
	}
	return (*this);
}

static bool	isValidDateFormat(const string& date)
{
	if (date.length() != 10)
		return false;
	for (size_t i = 0; i < date.length(); i++)
	{
		if ((i == 4 || i == 7))
		{
			if (date[i] != '-')
				return false;
		}
		else if (!std::isdigit(date[i]))
			return false;
	}
	return true;
}

bool	BitcoinExchange::isValidDate(const string& date)
{
	int year, month, day;
	if (sscanf(date.c_str(), "%4d-%2d-%2d", &year, &month, &day) != 3)
		return false;
	if (month < 1 || month > 12 || day < 1 || year == 0)
		return false;
	switch (month)
	{
		case February:
			return (day <= (year % 4 == 0 ? 29 : 28));
		case April:
		case June:
		case September:
		case November:
			return (day <= 30);
		default:
			return (day <= 31);
	}
}

static double stringToDouble(const string& str) {
	stringstream ss(str);
	double result;

	ss >> result;
	if (ss.fail() || !ss.eof())
		return -1;
	return result;
}

void BitcoinExchange::insert(ifstream& infile)
{
	while(!infile.eof())
	{
		string tmp;
		getline(infile, tmp);
		if (infile.eof())
			break;
		string res;
		size_t delim_position = tmp.find(',');
		string date = tmp.substr(0, delim_position);
		string price_value = tmp.substr(delim_position + 1);
		double price = stringToDouble(price_value);
		database[date] = price;
	}
}

static void firstLine(const string& line)
{
	size_t delim_position = line.find('|');

	if (delim_position == string::npos)
		throw std::invalid_argument("Error: file must start with date | value.");
	string data = line.substr(0, delim_position - 1);
	data.erase(0, data.find_first_not_of(" "));
	data.erase(data.find_last_not_of(" ") + 1);
	string value = line.substr(delim_position + 1);
	value.erase(0, value.find_first_not_of(" "));
	value.erase(value.find_last_not_of(" ") + 1);
	if (data != "date" || value != "value")
	{
		throw std::invalid_argument("Error: file must start with date | value.");
	}
}

void BitcoinExchange::exec(ifstream& infile)
{
	bool flag = true;
	while(!infile.eof())
	{
		string tmp;
		getline(infile, tmp);

		if (infile.eof())
			break ;
		if (flag)
		{
			flag = false;
			firstLine(tmp);
			continue;
		}
		string res;
		size_t delim_position = tmp.find('|');

		if (delim_position == string::npos)
		{
			clog << "Error: bad input => " << tmp << "\n";
			continue;
		}
		string data = tmp.substr(0, delim_position - 1);
		data.erase(0, data.find_first_not_of(" "));
	    data.erase(data.find_last_not_of(" ") + 1);


		if (!isValidDateFormat(data) || !isValidDate(data))
		{
			clog << "Error: invalid date form => " << data << "\n";
			continue;
		}
		string earliestDate = this->database.begin()->first;
		if (data < earliestDate)
		{
			clog << "Error: no info for date => " << data << "\n";
			continue;
		}
		string factor = tmp.substr(delim_position + 1);
		factor.erase(0, factor.find_first_not_of(" "));
	    factor.erase(factor.find_last_not_of(" ") + 1);
		double price = stringToDouble(factor);
		if (price < 0 || price > 1000)
		{
			cout << "Error: your value is " << price << ": values should be in range [0-1000].\n";
			continue;
		}
		map<string, double>::const_iterator it = this->database.lower_bound(data);
		if (it == this->database.end()) {
				--it;
			}
			else if (it != this->database.begin() && it->first != data){
				map<string, double>::const_iterator prevIt = it;
				--prevIt;
				--it;
				if ((data.compare(it->first) - data.compare(prevIt->first)) > 0)
					it = prevIt;
			}
			cout << data << " => " << price << " = " << price * it->second << "\n";
	}
}

void BitcoinExchange::operator()()
{
	ifstream infile;

	infile.open(filename);
	if (!infile.is_open() || infile.eof())
		throw	std::invalid_argument("Error: could not open file.");
	exec(infile);
	infile.close();
}

BitcoinExchange::~BitcoinExchange(){}

