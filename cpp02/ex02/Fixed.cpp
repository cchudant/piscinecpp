#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;
const int Fixed::_shiftPower = 256;

Fixed::Fixed(): _raw(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &c): _raw(c._raw)
{
}

Fixed &Fixed::operator=(const Fixed &c)
{
    _raw = c._raw;
    return *this;
}

int Fixed::getRawBits() const
{
    return _raw;
}

void Fixed::setRawBits(const int raw)
{
    _raw = raw;
}

Fixed::Fixed(const int intValue): _raw(intValue << _fractionalBits)
{
}

Fixed::Fixed(const float floatValue): _raw(roundf(floatValue * _shiftPower))
{
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

bool Fixed::operator>(const Fixed &b) const
{
    return _raw > b._raw;
}

bool Fixed::operator<(const Fixed &b) const
{
    return _raw < b._raw;
}

bool Fixed::operator>=(const Fixed &b) const
{
    return _raw >= b._raw;
}

bool Fixed::operator<=(const Fixed &b) const
{
    return _raw <= b._raw;
}

bool Fixed::operator==(const Fixed &b) const
{
    return _raw == b._raw;
}

bool Fixed::operator!=(const Fixed &b) const
{
    return _raw != b._raw;
}

Fixed Fixed::operator+(const Fixed &b) const
{
    return _raw + b._raw;
}

Fixed Fixed::operator-(const Fixed &b) const
{
    return _raw - b._raw;
}

Fixed Fixed::operator*(const Fixed &b) const
{
}

Fixed Fixed::operator/(const Fixed &b) const
{
}

Fixed &Fixed::operator++()
{
    _raw++;
    return *this;
}

Fixed &Fixed::operator--()
{
    _raw--;
    return *this;
}

Fixed Fixed::operator++(int _dummy)
{
    (void)_dummy;
    Fixed f = *this;
    _raw++;
    return f;
}

Fixed Fixed::operator--(int _dummy)
{
    (void)_dummy;
    Fixed f = *this;
    _raw--;
    return f;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a._raw < b._raw ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a._raw < b._raw ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a._raw > b._raw ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a._raw > b._raw ? a : b;
}
