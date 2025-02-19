#include "Fixed.hpp"

int main()
{
    Fixed a(12.34f);
    Fixed b(2.0f);

    Fixed s = a;
    Fixed sum = a + b;
    Fixed difference = a - b;
    Fixed product = a * b;
    Fixed quotient = a / b;

    std::cout << "Sum: " << sum.toInt() << std::endl;
    std::cout << "Difference: " << difference.toFloat() << std::endl;
    std::cout << "Product: " << product.toFloat() << std::endl;
    std::cout << "Quotient: " << quotient.toFloat() << std::endl;
}