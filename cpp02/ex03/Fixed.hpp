#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed
{
    private:
        int _raw;
        static const int _fractionalBits;
        static const int _shiftPower;
        static const int _fractionMask;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &c);
        Fixed &operator=(const Fixed &c);

        int getRawBits() const;
        void setRawBits(const int raw);

        Fixed(const int intValue);
        Fixed(const float floatValue);

        float toFloat() const;
        int toInt() const;

        bool operator>(const Fixed &b) const;
        bool operator<(const Fixed &b) const;
        bool operator>=(const Fixed &b) const;
        bool operator<=(const Fixed &b) const;
        bool operator==(const Fixed &b) const;
        bool operator!=(const Fixed &b) const;

        Fixed operator+(const Fixed &b) const;
        Fixed operator-(const Fixed &b) const;
        Fixed operator*(const Fixed &b) const;
        Fixed operator/(const Fixed &b) const;

        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);

        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);


#endif
