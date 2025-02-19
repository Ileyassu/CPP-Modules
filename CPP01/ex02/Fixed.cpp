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
    if (this == &obj)
        return *this;
    this->fixedPointValue = obj.fixedPointValue;
    return *this;
}

Fixed::Fixed(const int num) 
{
        std::cout << "Int constructor called\n";
        fixedPointValue = num << numberOfFractionalBits;
}

Fixed::Fixed(const float num)
{
       std::cout << "Float constructor called\n";
        fixedPointValue = roundf(num * (1 << numberOfFractionalBits));
}

float Fixed::toFloat(void) const {
        return (float)fixedPointValue / (1 << numberOfFractionalBits);
    }

int Fixed::toInt(void) const {
        return fixedPointValue >> numberOfFractionalBits;
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

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed &Fixed::operator++() {
    this->fixedPointValue++;
    return *this;
}

float Fixed::operator++(int) {
        float temp = this->fixedPointValue;
        temp = Fixed::toFloat();
        this->fixedPointValue++;
        return temp;
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.fixedPointValue = this->fixedPointValue + other.fixedPointValue;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.fixedPointValue = this->fixedPointValue - other.fixedPointValue;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.fixedPointValue = (this->fixedPointValue * other.fixedPointValue) >> numberOfFractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.fixedPointValue == 0) {
        throw std::runtime_error("Division by zero");
    }
    Fixed result;

    result.fixedPointValue = (this->fixedPointValue << numberOfFractionalBits) / other.fixedPointValue;
    return result;
}

bool Fixed::operator==(const Fixed &obj)
{
    return (this->fixedPointValue == obj.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &obj)
{
    return (this->fixedPointValue >= obj.fixedPointValue);
}

bool Fixed::operator<=(const Fixed &obj)
{
    return (this->fixedPointValue <= obj.fixedPointValue);
}

bool Fixed::operator>(const Fixed &obj)
{
    return (this->fixedPointValue > obj.fixedPointValue);
}

bool Fixed::operator<(const Fixed &obj)
{
    return (this->fixedPointValue < obj.fixedPointValue);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
    return (ref1 > ref2 ? ref1 : ref2);
}

const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
    return (ref1.fixedPointValue > ref2.fixedPointValue ? ref1 : ref2);
}