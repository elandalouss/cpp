/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:10:43 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/27 16:35:50 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    fixedValue = fnum * (1 << fractionalBits);
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
    os << obj.toFloat();
    return os;
}