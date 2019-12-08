#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string s(av[i]);
        for (std::string::size_type j = 0; j < s.length(); j++)
            std::cout << char(toupper(s[j]));
    }
    std::cout << std::endl;
}