/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:27:54 by skybt             #+#    #+#             */
/*   Updated: 2020/01/05 20:01:07 by skybt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

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
    float f = float(strtod(cin, &ptr));
    if (&cin[in.length() - 1] != ptr)
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (int(f) != f)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << double(f) << std::endl;
        return;
    }
    int i = int(f);
    if (isprint(char(i)))
        std::cout << "char: '" << char(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << double(f) << std::endl;    
}

void handleDouble(std::string in)
{
    char *ptr;
    const char *cin = in.c_str();
    float f = strtod(cin, &ptr);
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
    if (&cin[in.length()] != ptr)
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (int(f) != f)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << float(f) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << f << std::endl;
        return;
    }
    int i = int(f);
    if (isprint(char(i)))
        std::cout << "char: '" << char(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << float(f) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << f << std::endl;    
}

void handleInt(std::string in)
{
    char *ptr;
    const char *cin = in.c_str();
    int i = int(strtol(cin, &ptr, 10));
    if (&cin[in.length()] != ptr)
    {
        std::cout << "Cannot understand input!" << std::endl;
        return;
    }
    if (isprint(char(i)))
        std::cout << "char: '" << char(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << float(i) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << double(i) << std::endl; 
}

void handleChar(std::string in)
{
    char c = in[1];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << int(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << float(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << double(c) << std::endl; 
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
