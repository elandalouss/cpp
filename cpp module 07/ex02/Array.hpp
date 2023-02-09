/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:38:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/09 05:27:58 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>
template <typename T>

class Array {
    private :
        T           *arr;
        unsigned int _size;
    public :
        Array() {
            std::cout << "Default constructor has been called from Array class" << std::endl;
            T *arr = new T[0];
        };
        Array(unsigned int n) : _size(n) {
            std::cout << "Parametrized constructor has been called from Array class" << std::endl;
            arr = new T[_size];
        };
        Array (const Array& copy) {
            std::cout << "Copy constructor has been called from Array class" << std::endl;
            _size = copy._size;
            arr = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                arr[i] = copy.arr[i];
        };
        Array &operator=(const Array& copy) {
            std::cout << "Copy assainemet has been called from Array class" << std::endl;
            _size = copy._size;
            delete [] arr;
            arr = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                arr[i] = copy.arr[i];
        };
        T& operator[](unsigned int index) const {
            if (index >= this->_size)
                throw outOfRangeException();
            return this->arr[index];
        };
        class outOfRangeException : public std::exception {
            const char *what () const throw() {
                return ("out of range");
            };                  
        };
        ~Array() {
            std::cout << "Destructor has been called from Array class" << std::endl;
            delete [] arr;
        };
};

#endif