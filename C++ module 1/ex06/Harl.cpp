#include <Harl.hpp>


void	Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << endl;
}

void	Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << endl;
}

void	Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << endl;
}

void	Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now.\n" << endl;
}

void	Harl::complain(string level)
{
	std::pair<string, void(Harl::*)(void)> arr[4];
	arr[0] = std::make_pair("DEBUG", &Harl::debug);
	arr[1] = std::make_pair("INFO", &Harl::info);
	arr[2] = std::make_pair("WARNING", &Harl::warning);
	arr[3] = std::make_pair("ERROR", &Harl::error);

	int j = -1;
	while (++j < 4 && arr[j].first != level);
	switch (j)
	{
		case 0:
			cout << "[ " << arr[j].first << " ]\n";
			(this->*arr[j++].second)();
		case 1:
			cout << "[ " << arr[j].first << " ]\n";
			(this->*arr[j++].second)();
		case 2:
			cout << "[ " << arr[j].first << " ]\n";
			(this->*arr[j++].second)();
		case 3:
			cout << "[ " << arr[j].first << " ]\n";
			(this->*arr[j++].second)();
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
