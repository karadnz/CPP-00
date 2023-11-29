/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:54 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/27 18:31:13 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

//getters
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);	
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
	<< "accounts:" <<  getNbAccounts()<< ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals()
	<< std::endl;
}


//construct, destruct
Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout
	<< "index:" <<  this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "created"
	<<std::endl;
	
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout
	<< "index:" <<  this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "closed"
	<<std::endl;
	
}


//methods
void	Account::makeDeposit( int deposit )
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	
	_totalNbDeposits++;
    _totalAmount += deposit;

	_displayTimestamp();
	std::cout
	<< "index:" <<  this->_accountIndex << ";"
	<< "p_amount:" << p_amount << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits
	<<std::endl;
	
	
}
bool	Account::makeWithdrawal( int withdrawal )
{	
	_displayTimestamp();
	
	std::cout
	<< "index:" <<  this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";";

	if (this->checkAmount() < withdrawal)
	{
		std::cout
		<< "withdrawal:" << "refused"
		<<std::endl;
		return (false);
	}
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
    _totalAmount -= withdrawal;

	std::cout
	<< "withdrawal:" << withdrawal << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_withdrawals:" << this->_nbWithdrawals
	<<std::endl;

	return (true);
	
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout
	<< "index:" <<  this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals 
	<<std::endl;
	
	
}

void Account::_displayTimestamp(){
    std::time_t result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
                << std::setw(2) << 1 + std::localtime(&result)->tm_mon
                <<  std::setw(2) << std::localtime(&result)->tm_mday
                <<  "_"
                <<  std::setw(2) << std::localtime(&result)->tm_hour
                <<  std::setw(2) << std::localtime(&result)->tm_min
                <<  std::setw(2) << std::localtime(&result)->tm_sec 
                << "] " << std::flush;
}