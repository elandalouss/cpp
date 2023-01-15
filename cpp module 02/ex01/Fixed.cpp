#include "Fixed.hpp"


Fixed::Fixed() : fixedValue(0) {
    std::cout << "default constractor called" << std::endl;
};

Fixed::Fixed(const Fixed &obj) : fixedValue(obj.fixedValue) {
    std::cout << "copy constractor called" << std::endl;
    this->fixedValue = obj.fixedValue;
};

Fixed & Fixed::operator=(const Fixed& other) {
    std::cout << "copy assinement operator has called" << std::endl;
    if (this == &other)
        return *this;
    this->fixedValue = other.fixedValue;
    return *this;
}

Fixed::Fixed (const int num) {
    // new
};

Fixed::Fixed (const float fnum) {
    // new
};

Fixed::~Fixed() {
    std::cout << "destructor has called" << std::endl;
};
int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedValue);
};

void Fixed::setRawBits(int const raw) {
    fixedValue = raw;
};

float Fixed::toFloat(void) const {
    // new 
};

int Fixed::toInt(void) const {
    // new
};