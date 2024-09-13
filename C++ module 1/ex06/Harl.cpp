#include <Harl.hpp>


void	Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void	Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	bool flag = true;
	std::pair<string, void(Harl::*)(void)> arr[4];
	arr[0] = std::make_pair("DEBUG", &Harl::debug);
	arr[1] = std::make_pair("INFO", &Harl::info);
	arr[2] = std::make_pair("WARNING", &Harl::warning);
	arr[3] = std::make_pair("ERROR", &Harl::error);

	int j = -1;
	while (++j < 4)
	{
		if (arr[j].first == level)
		{
			while (j < 4)
			{
				cout << "[ " << arr[j].first << " ]" << endl;
				(this->*arr[j].second)();
				cout << endl;
				j++;
				flag = false;
			}
		}
	}
	if (flag)
		cout << "[ Probably complaining about insignificant problems ]" << endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
