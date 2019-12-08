#include <iostream>
#include "Fixed.hpp"

Fixed parseFactor(const std::string &str)
{
    Fixed op1 = parseTerm(str);
    if (!str.length())
        return op1;
    if (str[0] == '*')
        return op1 * parseFactor(str = str.substr(1, str.length() - 1));
    if (str[0] == '/')
        return op1 / parseFactor(str = str.substr(1, str.length() - 1));
}

Fixed parseTerm(const std::string &str)
{
    if (!str.length())
        throw ParsingException();
    if (str[0] == '.' || str[0] == '+' || str[0] == '-' ||
            (str[0] >= '0' && str[0] <= '9'))
        return parseConstant(str)
    if (str.length() >= 2 && str[0] == '(' && str[str.length() - 2] == ')')
        return parseExpr(str = str.substr(1, str.length() - 2))
    if (str[0] == ')')
        str = str.substr(1, str.length - 1);
    throw ParsingException();
}

Fixed parseConstant(const std::string &str)
{
    std::string::size_type i = 0;
    bool dot = false;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < str.length() &&
            ((str[i] >= '0' && str[i] <= '9') || str[i] == '.'))
    {
        if (str[i] == '.')
        {
            if (!dot)
                dot = true;
            else
                throw ParsingException();
        }
        i++;
    }

    Fixed res = Fixed(atof(str.c_str()));
    str = str.substr(i, str.length() - i)
    return res;
}

int main() {
}