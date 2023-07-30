/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:54 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/30 16:27:11 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_accountIndex << ";"
	<< "created:" << this->_accountIndex << ";"
	<< "index:" << this->_accountIndex << ";"
	
}


//construct, destruct
Account::Account( int initial_deposit )
{
	
}
Account::~Account( void )
{
	
}


//methods
void	Account::makeDeposit( int deposit )
{
	
}
bool	Account::makeWithdrawal( int withdrawal )
{
	
}
int		Account::checkAmount( void ) const
{
	
}
void	Account::displayStatus( void ) const
{
	
}

void	Account::_displayTimestamp( void )
{
	
}