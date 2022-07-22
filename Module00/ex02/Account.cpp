/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:58:52 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/05 19:58:53 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
    Account::_accountIndex = _nbAccounts;
    Account::_amount = 0;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex
                << ";amount:" << Account::_amount
                << ";created\n";
    _nbAccounts+=1;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex
                << ";amount:" << Account::_amount
                << ";closed\n";
}

Account::Account( int initial_deposit )
{
    Account::_amount = initial_deposit;
    Account::_accountIndex = _nbAccounts;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex
                << ";amount:" << checkAmount()
                << ";created\n";
    _nbAccounts +=1;
    _totalAmount += initial_deposit;
}

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
    Account::_displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
                << ";total:" << getTotalAmount()
                << ";desposits:" << getNbDeposits()
                << ";withdrawals:" << getNbWithdrawals()
                << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex
                << ";p_amount:" << _amount;
                Account::_nbDeposits +=1;
                _amount += deposit;
    std::cout << ";disposit:" << deposit
                << ";amount:" << _amount
                << ";nb_deposits:" << Account::_nbDeposits
                << std::endl;
    _totalNbDeposits +=1;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex
                << ";p_amount:" << _amount;
    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:refused\n";
        return (0);
    }
    else
    {
        Account::_nbWithdrawals++;
        _amount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal
                    << ";amount:" << _amount
                    << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
    }
    _totalNbWithdrawals +=1;
    _totalAmount -= withdrawal;
    return (1);
}

int		Account::checkAmount( void ) const
{
    return (Account::_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex
                << ";amount:" << checkAmount()
                << ";disposit:" << Account::_nbDeposits
                << ";withdrawals:" << Account::_nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    struct tm *localT = localtime(&now);

    std::string currentDate = ctime(&now);
    std::cout << '[' << 1900+localT->tm_year
                << 1+localT->tm_mon
                << localT->tm_mday << '_'
                << 5+localT->tm_hour
                << 30+localT->tm_min
                << localT->tm_sec << ']';
}