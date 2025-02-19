#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private :
        int fixedPointValue;
        static const int numberOfFractionalBits;
    public :
        Fixed();
        Fixed(const Fixed &obj);
        ~Fixed();
        Fixed &operator=(const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif