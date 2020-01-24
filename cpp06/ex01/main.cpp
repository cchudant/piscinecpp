/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 20:05:33 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:39:30 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <cstdlib>
#include <sstream>
#include <limits.h>
#include <stdint.h>
#include <iostream>

// random double between 0 and 1
double random_d()
{
    return double(rand()) / double(RAND_MAX);
}

const static std::string ALNUM = "abcdefghijklmnopqrstuvwxyzQBCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

char rand_alnum()
{
    return ALNUM[size_t(random_d() * ALNUM.length())];
}

int rand_int()
{
    return int(INT_MAX * random_d());
}

void *serialize()
{
    uint8_t *bytes = new uint8_t[8 + 4 + 8];
    for (size_t i = 0; i < 8; i++)
        bytes[i] = rand_alnum();
    int i = rand_int();
    bytes[8] = uint8_t(i >> 24 & 0xFF);
    bytes[9] = uint8_t(i >> 16 & 0xFF);
    bytes[10] = uint8_t(i >> 8 & 0xFF);
    bytes[11] = uint8_t(i >> 0 & 0xFF);
    for (size_t i = 0; i < 8; i++)
        bytes[8 + 4 + i] = rand_alnum();
    return reinterpret_cast<void*>(bytes);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    uint8_t *bytes = reinterpret_cast<uint8_t*>(raw);
    std::stringstream ss1;
    for (size_t i = 0; i < 8; i++)
        ss1 << char(bytes[i]);
    int i = bytes[8] << 24 | bytes[9] << 16 | bytes[10] << 8 | bytes[11] << 0;
    std::stringstream ss2;
    for (size_t i = 0; i < 8; i++)
        ss2 << char(bytes[8 + 4 + i]);
    *data = (Data) { .s = ss1.str(), .n = i, .s2 = ss2.str() };
    return data;
}

int main()
{
    void *bytes = serialize();
    Data *data = deserialize(bytes);
    std::cout << "s = " << data->s << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
    delete bytes;
    delete data;
}
