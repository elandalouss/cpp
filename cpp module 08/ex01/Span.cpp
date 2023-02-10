/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:03:20 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/10 06:40:43 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int g_i = 0;

Span::Span() {
    std::cout << "Default constructor has been called from class Span" << std::endl;  
    arr = new std::vector<int>(0);
    
};

Span::Span(unsigned int e_N) : N(e_N) {
    std::cout << "Paramtrized constructor has been called from class Span" << std::endl;  
    this->arr = new std::vector<int>(0);
};

Span::Span(const Span &copy) {
    std::cout << "Copy constructor has been called from class Span" << std::endl;  
    this->N = copy.N;
    for (unsigned int i = 0; i < this->N; i++)
        this->arr[i] = copy.arr[i];
};

Span&Span::operator=(const Span &copy) {
    this->N = copy.N;
    return *this;
};

Span::~Span() {
    std::cout << "Destructor has been called from class Span" << std::endl;  
    // delete [] arr;
};

const char* Span::overFlow::what() const throw() {
    return ("The vector is fill");
};

const char* Span::noHightRange::what() const throw() {
    return ("there is no highter range");
};


void Span::addNumber(int num) {
    if (g_i >= N) 
        throw overFlow();
    arr->push_back(num);
    g_i++;
};

std::vector<int>* Span::getVector() const {
    return this->arr;
};

int Span::longestSpan() {
    int size = arr->size();
    int res, tmp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr->at(j) > arr->at(j + 1)) {
                tmp = arr->at(j);
                arr->at(j) = arr->at(j + 1);
                arr->at(j + 1) = tmp;
            }
        }
    }
    res = arr->at(size - 1) - arr->at(0);
    if (res == 0)
        throw noHightRange();
    return (res);
};

// int Span::shortestSpan() {
//     int res = arr->at(0) , size = arr->size();
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr->at(j) - arr->at(j + 1) < res && arr->at(j) - arr->at(j + 1) >= 0) {
//                 if (arr->at(j) - arr->at(j + 1) == 0)
//                     return (0);
//                 res = arr->at(j) - arr->at(j + 1) - 1;    
//             }
//         }
//     }      // fuck this code :)
//     return (res);
// };

