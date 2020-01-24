/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 08:00:06 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 08:04:17 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int usage(char **av)
{
    std::cout << "Usage: " << av[0] << " <file> <find> <replace>" << std::endl;
    return 1;
}

int main(int ac, char **av)
{
    if (ac < 4)
        return usage(av);
    std::string file = av[1];
    std::string find = av[2];
    std::string replace = av[3];
    if (!file.length() || !find.length() || !replace.length())
        return usage(av);

    std::fstream in, out;
    in.open(file.c_str(), std::fstream::in);
    if (!in)
    {
        std::cout << "Input file does not exist" << std::endl;
        return 1;
    }
    out.open((file + ".replace").c_str(), std::fstream::out);
    if (!out)
    {
        in.close();
        std::cout << "IO Error" << std::endl;
        return 1;
    }

    std::string::size_type findlen = find.length();
    char *queue = new char[findlen];
    std::string::size_type index = 0;
    std::string::size_type len = 0;
    while (!in.eof())
    {
        if (!in.read(&queue[index], 1))
            break;
        len++;
        if (len == findlen)
        {
            bool found = true;
            for (std::string::size_type i = 0; i < findlen; i++)
            {
                if (queue[(index + 1 + i) % findlen] != find[i])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                len = 0;
                out << replace;
                index = (index + 1) % findlen;
            }
            else
            {
                out << queue[(index + 1) % findlen];
                len--;
            }
        }
        index = (index + 1) % findlen;
    }
    while (len > 0)
    {
        out << queue[(index + 1) % findlen];
        len--;
        index = (index + 1) % findlen;
    }
    in.close();
    out.close();
    return 0;
}
