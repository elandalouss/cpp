/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:03:20 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 02:41:38 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int g_i = 0;

Span::Span() {
    std::cout << "Default constructor has been called from class Span" << std::endl;  
};

Span::Span(unsigned int e_N) : N(e_N) {
    std::cout << "Paramtrized constructor has been called from class Span" << std::endl;  
};

Span::Span(const Span &copy) {
    std::cout << "Copy constructor has been called from class Span" << std::endl;  
    this->N = copy.N;
    for (unsigned int i = 0; i < this->N; i++)
        this->arr[i] = copy.arr[i];
};

Span&Span::operator=(const Span &copy) {
    this->N = copy.N;
    for (unsigned int i = 0; i < this->N; i++)
        this->arr[i] = copy.arr[i];
    return *this;
};

Span::~Span() {
    std::cout << "Destructor has been called from class Span" << std::endl;  
};

const char* Span::empty::what() const throw() {
    return ("The vector is empty, or contain only one element");
};

const char* Span::overFlow::what() const throw() {
    return ("Out of range : you pass the limit N");
};

void Span::addNumber(int num) {
    if (g_i >= N) 
        throw overFlow();
    arr.push_back(num);
    g_i++;
};

std::vector<int> Span::getVector() const {
    return arr;
};

int Span::longestSpan() {
	if (arr.size() > 1){  	
		int size = arr.size();
		std::vector<int> vec;
		std::sort(arr.begin(), arr.end());
		vec.assign(arr.begin(), arr.end());
		return (arr.at(size - 1) - arr.at(0));
	}
	throw empty();
};

int Span::shortestSpan() {
	if (arr.size() > 1){  	
		unsigned int size = arr.size();
		int tmp, res = INT_MAX;
		std::vector<int> vec;
		std::sort(arr.begin(), arr.end());
		vec.assign(arr.begin(), arr.end());
		for (unsigned int i = 0; i + 1 < size; i++) {
			if ((tmp = abs(vec[i] - vec[i + 1])) < res) {res = tmp;}
				if (res == 0) {break;}
		}
		return (res);
	}
	throw empty();
};

void Span::ultimateAddNumber(unsigned int max) {
	srand(time(0));
	for (unsigned int i = 0; i < max; i++)
		arr.push_back(rand() % 100);
};
