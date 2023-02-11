/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:03:02 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 02:40:10 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <iterator>
#include <algorithm>
#include <exception>

class Span {
    private :
        std::vector<int>    arr;
        unsigned int         N;
    public :
        Span();
        Span(unsigned int e_N);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();
        void addNumber(int num);
        int longestSpan();
        int shortestSpan();
        void ultimateAddNumber(unsigned int max);
        std::vector<int> getVector() const;
        class overFlow : public std::exception {
            const char* what() const throw();
        };
        class empty : public std::exception {
            const char* what() const throw();
        };
};

#endif