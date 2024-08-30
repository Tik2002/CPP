#include <iostream>
#include <ctime>
#include <iomanip> // std::setw and std::setfill
#include <sstream> // std::ostringstream
#include "Account.hpp"
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

static int _acc_ammount[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

int	Account::getNbAccounts( void ){return Account::_nbAccounts;}

int	Account::getTotalAmount( void ){return Account::_totalAmount;}

int	Account::getNbDeposits( void ){return Account::_totalNbDeposits;}

int	Account::getNbWithdrawals( void ){return Account::_totalNbWithdrawals;}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() <<
	";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << endl;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += _acc_ammount[this->_accountIndex] = this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << endl;
}

Account::~Account( void )
{
	if (this->_accountIndex == 7)
	{
		for (int i = 0; i < Account::_nbAccounts; i++)
		{
			_displayTimestamp();
			cout << "index:" << i << ";amount:" << _acc_ammount[i] << ";closed" << endl;
		}
	}
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	_acc_ammount[this->_accountIndex] = this->_amount += deposit;
	Account::_totalAmount += deposit;
	cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << ++this->_nbDeposits << endl;
	Account::_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	_acc_ammount[this->_accountIndex] = this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << ++this->_nbWithdrawals << endl;
	Account::_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);

	struct tm *ltm = std::localtime(&now);

    std::ostringstream timestamp;

    timestamp << '['
              << (ltm->tm_year + 1900)
              << setw(2) << setfill('0') << (ltm->tm_mon + 1)
              << setw(2) << setfill('0') << ltm->tm_mday << '_'
              << setw(2) << setfill('0') << ltm->tm_hour
              << setw(2) << setfill('0') << ltm->tm_min
              << setw(2) << setfill('0') << ltm->tm_sec
              << ']';

    cout << timestamp.str() << " ";
}

