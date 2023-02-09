/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:04:31 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/08 00:52:28 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "func.hpp"
#include <iostream>

typedef struct nn{
    public :
        int a;
} nn;

int main() {
    // Data *ptr = new Data;
    // ptr->c = 'c';
    // ptr->num = 34;
    // ptr->f = 4.43f;
    // uintptr_t a;
    // a = serialize(ptr);
    // std::cout << "a   :" << &a << std::endl;
    // std::cout << "ptr :" << &ptr << std::endl;
    // float *bg = reinterpret_cast<float*>(a);
    // std::cout << *bg << std::endl;
    // Data *d;
    // d = deserialize(a);

    int *a = new int;
    *a = 5;
    std::cout << *a;
    long s = reinterpret_cast<long>(a);
    (void)s;
}