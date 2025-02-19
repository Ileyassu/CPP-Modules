#include "Fixed.hpp"

const int Fixed::numberOfFractionalBits = 8;

Fixed::Fixed():fixedPointValue(0){
    std::cout << "Default constructor called\n";
};
Fixed::Fixed(const Fixed &obj):fixedPointValue(obj.fixedPointValue){
    std::cout << "Copy constructor called\n";
};
Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called\n";
    if(this == &obj)
        return *this;
    this->fixedPointValue = obj.fixedPointValue;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}