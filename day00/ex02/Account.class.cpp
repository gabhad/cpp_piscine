#include "Account.class.hpp"
#include <iostream>

Account::Account( int deposit ):_amount(deposit)
{
    this->_accountIndex = getNbAccounts();
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_nbCallCheckAmount = 0;
    _nbAccounts++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount() << ";";
    std::cout << "created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount() << ";";
    std::cout << "closed" << std::endl;
    _nbAccounts++;
}


// Getters static variables

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}
int     Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
int     Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;   
}
int     Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

// Other functions

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    std::cout << "amount:" << this->checkAmount() << ";";
    this->_nbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << ";";
    std::cout << std::endl;
    
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return 0;
    } 
    std::cout << withdrawal << ";";
    this->_amount -= withdrawal;
    std::cout << "amount:" << this->checkAmount() << ";";
    this->_nbWithdrawals++;
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << ";";
    std::cout << std::endl;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    return 1;
}

int		Account::checkAmount( void ) const
{
    this->_nbCallCheckAmount++;
    return this->_amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
    std::cout << std::endl;
}

// Private

void	Account::_displayTimestamp( void )
{
  time_t        rawtime;
  struct tm     *timeinfo;
  char          buffer [18];

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  strftime (buffer,80,"[%Y%m%d_%H%M%S] ",timeinfo);
  std::cout << buffer;
}

Account::Account( void )
{

}
