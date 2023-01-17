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
    fixedValue = num << fractionalBits;
};

Fixed::Fixed (const float fnum) {
    float x = fnum * 256;
    fixedValue = x;
};

Fixed::~Fixed() {
    std::cout << "destructor has called" << std::endl;
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedValue);
};

void Fixed::setRawBits(int const raw) {
    fixedValue = raw;
};

float Fixed::toFloat(void) const {
    float x = roundf(fixedValue);
    return (x / (1 << fractionalBits));
};

int Fixed::toInt(void) const {
    return (fixedValue >> fractionalBits);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    float x = roundf(obj.getRawBits());
    os << (x / (1 << 8));
    return os;
}

bool Fixed::operator==(const Fixed& other) {
    return (fixedValue == other.fixedValue);
};

bool Fixed::operator!=(const Fixed& other) {
    return (fixedValue != other.fixedValue);
};

bool Fixed::operator>=(const Fixed& other) {
    return (fixedValue >= other.fixedValue);
};

bool Fixed::operator<=(const Fixed& other) {
    return (fixedValue <= other.fixedValue);
};

bool Fixed::operator>(const Fixed& other) {
    return (fixedValue > other.fixedValue);
};

bool Fixed::operator<(const Fixed& other) {
    return (fixedValue < other.fixedValue);
};

Fixed Fixed::operator+(const Fixed &other) const {
    return  (fixedValue + other.fixedValue);
};

Fixed Fixed::operator-(const Fixed &other) const {
    return (fixedValue - other.fixedValue);
};

Fixed Fixed::operator*(const Fixed &other) const {
    return  (fixedValue * other.fixedValue);
};

Fixed Fixed::operator/(const Fixed &other) const {
    return  (fixedValue / other.fixedValue);
};

Fixed& Fixed::operator++() {
    ++fixedValue;
    return *this;
};

Fixed& Fixed::operator--() {
    --fixedValue;
    return *this;
};

Fixed Fixed::operator++(int) {
   Fixed temp = *this;
   this->fixedValue++;
   return temp;
};

Fixed Fixed::operator--(int) {
   Fixed temp = *this;
    this->fixedValue--;
   return temp;
};

int& Fixed::min(int &obj1, int &obj2) {
    if (obj1 > obj2)
        return obj2;
    else
        return obj1;
}

int& Fixed::max(int &obj1, int &obj2) {
    if (obj1 < obj2)
        return obj2;
    else
        return obj1;
}

// int& Fixed::_min(const int &num1, const int &num2) {
//     if (num1 > num2)
//         return &num2;
//     else
//         return &num1;
// }