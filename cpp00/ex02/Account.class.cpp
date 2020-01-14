/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:11:29 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:12:04 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include "Account.class.hpp"

static int next_index = 0;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount()
{
    return Account::_totalAmount;
}

int Account::getNbDeposits()
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initialDeposit)
{
    Account::_nbAccounts++;
    _accountIndex = next_index++;
    Account::_totalAmount += initialDeposit;
    _amount = initialDeposit;
    _nbDeposits = 1;
    _nbWithdrawals = 0;
    _checkAmountCalledCount = 0;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    Account::_nbAccounts--;
    Account::_totalAmount -= _amount;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_totalNbDeposits++;
    _amount += deposit;
    Account::_totalAmount += deposit;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << (_amount - deposit) << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (_amount < withdrawal)
    {
        Account::_displayTimestamp();
        std::cout << " ";
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;

        return false;
    }

    Account::_totalNbWithdrawals++;
    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    _nbWithdrawals++;

    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << (_amount + withdrawal) << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;

    return true;
}

int Account::checkAmount() const
{
    Account *as_mutable = const_cast<Account *>(this);
    as_mutable->_checkAmountCalledCount++;
    return _amount;
}

void Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    time_t raw;
    struct tm *t;

    time(&raw);
    t = localtime(&raw);

    std::cout << "[";
    std::cout << std::setfill('0') << std::setw(4) << t->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << t->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_sec;
    std::cout << "]";
}

Account::Account()
{
    Account::_nbAccounts++;
    _accountIndex = next_index++;
    _amount = 0;
    _nbDeposits = 1;
    _nbWithdrawals = 0;
    _checkAmountCalledCount = 0;
}
