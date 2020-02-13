/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 21:51:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/13 07:00:01 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "XCounter.hpp"

template <typename T, typename Consumer>
void iter(T *t, size_t len, Consumer &fn)
{
    for (size_t i = 0; i < len; i++)
        fn(t[i]);
}

void fn_int(int &t)
{
    std::cout << t << std::endl;
}

void fn_str(std::string &obj)
{
    std::cout << obj << std::endl;
}

int main()
{
    std::cout << "Int" << std::endl;
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    iter(array, 10, fn_int);

    std::cout << "String" << std::endl;
    std::string array_str[] = { "a", "b", "c", "d", "e" };
    iter(array_str, 5, fn_str);

    std::cout << "Function object" << std::endl;
    std::string chars = "abXddkXXllopXp";
    XCounter counter;
    iter(chars.c_str(), chars.length(), counter);
    std::cout << "Number of X's: " << counter.getCount() << std::endl;
}
