/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:27:54 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/30 14:53:46 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

const double INT_MAX_AS_DOUBLE = static_cast<double>(INT_MAX);
const double INT_MIN_AS_DOUBLE = static_cast<double>(INT_MIN);

void handleFloat(std::string in)
{
    char *ptr;
    const char *cin = in.c_str();
    if (in == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (in == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (in == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -nanf" << std::endl;
        std::cout << "double: -nan" << std::endl;
        return;
    }
    float asFloat = static_cast<float>(strtod(cin, &ptr));
    double asDouble = static_cast<double>(asFloat);
    int asInt = static_cast<int>(asFloat);
    char asChar = static_cast<char>(asInt);
    if (&cin[in.length() - 1] != ptr)
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (asInt != asFloat || asDouble > INT_MAX_AS_DOUBLE || asDouble < INT_MIN_AS_DOUBLE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl;
        return;
    }
    if (isprint(asChar))
        std::cout << "char: '" << asChar << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << asInt << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl;    
}

void handleDouble(std::string in)
{
    char *ptr;
    const char *cin = in.c_str();
    if (in == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (in == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (in == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -nanf" << std::endl;
        std::cout << "double: -nan" << std::endl;
        return;
    }
    double asDouble = strtod(cin, &ptr);
    float asFloat = static_cast<float>(asDouble);
    int asInt = static_cast<int>(asDouble);
    char asChar = static_cast<char>(asInt);
    if (&cin[in.length()] != ptr)
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (asInt != asDouble || asDouble > INT_MAX_AS_DOUBLE || asDouble < INT_MIN_AS_DOUBLE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl;
        return;
    }
    if (isprint(asChar))
        std::cout << "char: '" << asChar << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << asInt << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl;    
}

void handleInt(std::string in)
{
    char *ptr;
    const char *cin = in.c_str();
    long val = strtol(cin, &ptr, 10);
    int asInt = static_cast<int>(val);
    double asDouble = static_cast<double>(asInt);
    float asFloat = static_cast<float>(asInt);
    char asChar = static_cast<char>(asInt);
    if (&cin[in.length()] != ptr || val != static_cast<long>(asInt))
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (isprint(asChar))
        std::cout << "char: '" << asChar << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << asInt << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl; 
}

void handleChar(std::string in)
{
    char asChar = in[1];
    int asInt = static_cast<int>(asChar);
    double asDouble = static_cast<double>(asChar);
    float asFloat = static_cast<float>(asChar);
    std::cout << "char: '" << asChar << "'" << std::endl;
    std::cout << "int: " << asInt << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << asFloat << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << asDouble << std::endl; 
}

bool hasADot(std::string in)
{
    for (std::string::size_type i = 0; i < in.length(); i++)
        if (in[i] == '.')
            return true;
    return false;
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Please provide a value" << std::endl;
        return 1;
    }
    std::string in = av[1];
    if (in.length() > 1 && in[in.length() - 1] == 'f' && in != "+inf" && in != "-inf")
        handleFloat(in);
    else if (hasADot(in.c_str()) || in == "+inf" || in == "-inf" || in == "nan")
        handleDouble(in);
    else if (in.length() == 3 && in[0] == '\'' && in[2] == '\'')
        handleChar(in);
    else
        handleInt(in);
    return 0;
}
