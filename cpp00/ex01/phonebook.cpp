/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:11:24 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:11:51 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "phonebook.hpp"
#include <cstdio>


static void prompt(std::string &s)
{
    std::cout << "> ";
    getline(std::cin, s);
}

Contact::Contact()
{
}

void Contact::ask()
{
    std::cout << "Enter the first name:" << std::endl;
    prompt(first_name);
    std::cout << "Enter the last name:" << std::endl;
    prompt(last_name);
    std::cout << "Enter the nickname:" << std::endl;
    prompt(nickname);
    std::cout << "Enter the login:" << std::endl;
    prompt(login);
    std::cout << "Enter the postal address:" << std::endl;
    prompt(postal_address);
    std::cout << "Enter the birthday date:" << std::endl;
    prompt(birthday_date);
    std::cout << "Enter the favorite meal:" << std::endl;
    prompt(favorite_meal);
    std::cout << "Enter the underwear color:" << std::endl;
    prompt(underwear_color);
    std::cout << "Enter the darkest secret:" << std::endl;
    prompt(darkest_secret);
    std::cout << "Contact created!" << std::endl;
}

static void display_column(std::string s)
{
    std::string::size_type is = 0;
    for (std::string::size_type i = 0; i < 9; i++)
    {
        if (10 - i > s.length())
            std::cout << ' ';
        else
            std::cout << s[is++];
    }
    if (!s.length())
        std::cout << ' ';
    else if (s.length() <= 10)
        std::cout << s[is];
    else
        std::cout << '.';
}

void Contact::display_compact(int index)
{
    std::stringstream ss;
    ss << index;
    display_column(ss.str());
    std::cout << '|';
    display_column(first_name);
    std::cout << '|';
    display_column(last_name);
    std::cout << '|';
    display_column(nickname);
    std::cout << std::endl;
}

void Contact::display()
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Login: " << login << std::endl;
    std::cout << "Postal address: " << postal_address << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Birthday date: " << birthday_date << std::endl;
    std::cout << "Favorite meal: " << favorite_meal << std::endl;
    std::cout << "Underwear color: " << underwear_color << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

static int parse_index(std::string s)
{
    if (s.length() < 1)
        return -1;
    for (std::string::size_type i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return -1;
    }

    int ret;
    std::stringstream ss(s);
    ss >> ret;
    if (ss.fail())
        return -1;
    return ret;
}

static void search_cmd(Contact book[8], int len)
{
    if (!len)
    {
        std::cout << "You have no contact. Don't be sad, I know you are a cool person." << std::endl;
        return;
    }

    std::cout << " INDEX    |First name|Last name | Nickname " << std::endl;
    std::cout << "----------+----------+----------+----------" << std::endl;

    for (int i = 0; i < len; i++)
        book[i].display_compact(i);
    std::string ind;
    std::cout << "Enter the index of the contact you want to see:" << std::endl;
    prompt(ind);
    int index = parse_index(ind);
    if (index >= 0)
    {
        if (index >= len)
            std::cout << "Could not find that contact. Abort." << std::endl;
        else
            book[index].display();
    }
    else
        std::cout << "Index error. Abort." << std::endl;
}

int main()
{
    std::string cmd;
    int len = 0;
    Contact book[8];

    std::cout << "Welcome to your crappy phonebook!" << std::endl;
    do
    {
        std::cout << "Enter your command:" << std::endl;
        prompt(cmd);

        if (cmd == "ADD")
        {
            if (len == 8)
            {
                std::cout << "The book is full!" << std::endl;
                continue;
            }
            book[len] = Contact();
            book[len].ask();
            len++;
        }
        else if (cmd == "SEARCH")
            search_cmd(book, len);
        else if (cmd != "EXIT")
            std::cout << "Unknown command." << std::endl;
    }
    while (cmd != "EXIT");
    std::cout << "Bye!" << std::endl;
    return 0;
}
