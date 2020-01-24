/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 21:51:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 05:02:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *t, size_t len, void (&fn)(T&))
{
    for (size_t i = 0; i < len; i++)
        (*fn)(t[i]);
}

void fn_int(int &t)
{
    std::cout << t << std::endl;
}

template <typename T>
void fn(T &obj)
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
    iter(array, 5, fn);

    std::cout << "Char" << std::endl;
    char array_char[] = { 'x', 'y', 'z' };
    iter(array_char, 3, fn);
}
