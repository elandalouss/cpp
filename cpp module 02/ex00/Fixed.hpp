/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:10:58 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/26 23:16:22 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed {
    private :
        static const int    fractionalBits = 8;
        int                 fixedValue;
    public :
        Fixed();
		Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed& other);
		~Fixed();
		int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif