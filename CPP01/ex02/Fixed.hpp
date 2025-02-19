#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private :
        int fixedPointValue;
        static const int numberOfFractionalBits;
    public :
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int num);
        Fixed(const float num);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator++();
        float operator++(int);
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        bool operator==(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator>(const Fixed &obj);
        bool operator<(const Fixed &obj);
        static Fixed &min(Fixed &ref1, Fixed &ref2);
        static const Fixed &min(const Fixed &ref1, const Fixed &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
