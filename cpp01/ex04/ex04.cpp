/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:42:16 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:42:17 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = s;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}
