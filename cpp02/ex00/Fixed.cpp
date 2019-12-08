#include <iostream>
#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

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