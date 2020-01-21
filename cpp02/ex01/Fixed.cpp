/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:55:50 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/21 05:36:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;
const int Fixed::_shiftPower = 256;
const int Fixed::_fractionMask = 0xFF;

Fixed::Fixed(): _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c): _raw(c._raw)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed &Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    _raw = c._raw;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _raw = raw;
}

Fixed::Fixed(const int intValue): _raw(intValue << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue): _raw(roundf(floatValue * _shiftPower))
{
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const
{
    return float(_raw) / _shiftPower;
}

int Fixed::toInt() const
{
    return _raw >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    return out << c.toFloat();
}
