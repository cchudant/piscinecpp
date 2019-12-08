#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:
        int _raw;
        static const int _fractionalBits;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &c);
        Fixed &operator=(const Fixed &c);

        int getRawBits() const;
        void setRawBits(const int raw);
};

#endif
