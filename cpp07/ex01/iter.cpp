/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 21:51:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/25 17:24:45 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *t, size_t len, void (&fn)(T const &))
{
    for (size_t i = 0; i < len; i++)
        fn(t[i]);
}

void fn_int(int const &t)
{
    std::cout << t << std::endl;
}

void fn_str(std::string const &obj)
{
    std::cout << obj << std::endl;
}

template <typename T>
void fn_T(T const &t)
{
    std::cout << t << std::endl;
}

int main()
{
    std::cout << "Int" << std::endl;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(array, 10, fn_int);

    std::cout << "String" << std::endl;
    std::string array_str[] = {"a", "b", "c", "d", "e"};
    iter(array_str, 5, fn_str);

    std::cout << "T Int" << std::endl;
    iter(array, 10, fn_T);

    std::cout << "String" << std::endl;
    iter(array_str, 5, fn_T);
}
