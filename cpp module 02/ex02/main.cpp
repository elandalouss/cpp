#include "Fixed.hpp"

int main(void) {

    Fixed  a(12.6f);
    Fixed  b(2.2f);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    a = b;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    if (a > b)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    
    std::cout << "========================" << std::endl;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    a = --b;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << Fixed::min(a, b) << std::endl;


    return 0;
}