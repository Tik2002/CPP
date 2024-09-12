#include <Harl.hpp>


void	Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void	Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	std::pair<string, void(Harl::*)(void)> arr[4];
	arr[0] = std::make_pair("ERROR", &Harl::error);
	arr[1] = std::make_pair("WARNING", &Harl::warning);
	arr[2] = std::make_pair("INFO", &Harl::info);
	arr[3] = std::make_pair("DEBUG", &Harl::debug);

	int j = -1;
	while (++j != 4)
	{
		if (arr[j].first == level)
			(this->*arr[j].second)();
	}
}


Harl::Harl()
{
}

Harl::~Harl()
{
}
