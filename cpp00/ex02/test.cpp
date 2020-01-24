/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:11:37 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:11:37 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"

int main()
{
    Account *a1 = new Account(42);
    Account *a2 = new Account(54);
    Account *a3 = new Account(957);
    Account *a4 = new Account(432);
    Account *a5 = new Account(1234);
    Account *a6 = new Account(0);
    Account *a7 = new Account(754);
    Account *a8 = new Account(16576);
    Account::displayAccountsInfos();
    a1->displayStatus();
    a2->displayStatus();
    a3->displayStatus();
    a4->displayStatus();
    a5->displayStatus();
    a6->displayStatus();
    a7->displayStatus();
    a8->displayStatus();
    a1->makeDeposit(5);
    a2->makeDeposit(765);
    a3->makeDeposit(564);
    a4->makeDeposit(2);
    a5->makeDeposit(87);
    a6->makeDeposit(23);
    a7->makeDeposit(9);
    a8->makeDeposit(20);
    Account::displayAccountsInfos();
    a1->displayStatus();
    a2->displayStatus();
    a3->displayStatus();
    a4->displayStatus();
    a5->displayStatus();
    a6->displayStatus();
    a7->displayStatus();
    a8->displayStatus();
    a1->makeWithdrawal(50);
    a2->makeWithdrawal(34);
    a3->makeWithdrawal(657);
    a4->makeWithdrawal(4);
    a5->makeWithdrawal(76);
    a6->makeWithdrawal(50);
    a7->makeWithdrawal(657);
    a8->makeWithdrawal(7654);
    Account::displayAccountsInfos();
    a1->displayStatus();
    a2->displayStatus();
    a3->displayStatus();
    a4->displayStatus();
    a5->displayStatus();
    a6->displayStatus();
    a7->displayStatus();
    a8->displayStatus();
    delete a1;
    delete a2;
    delete a3;
    delete a4;
    delete a5;
    delete a6;
    delete a7;
    delete a8;
}
