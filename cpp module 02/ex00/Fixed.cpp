/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:10:54 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/26 23:17:00 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : fixedValue(0) {
    std::cout << "default constractor called" << std::endl;
};

Fixed::Fixed(const Fixed &obj) : fixedValue(obj.fixedValue) {
    std::cout << "copy constractor called" << std::endl;
};

Fixed & Fixed::operator=(const Fixed& other) {
    std::cout << "copy assinement operator has called" << std::endl;
    if (this == &other)
        return *this;
    this->fixedValue = other.fixedValue;
    return *this;
};

Fixed::~Fixed() {
    std::cout << "destructor has called" << std::endl;
};

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedValue);
};

void Fixed::setRawBits(int const raw) {
    fixedValue = raw;
};