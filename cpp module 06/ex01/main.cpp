/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:04:31 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/07 18:51:47 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

int main() {
    Data *ptr = new Data;
    ptr->c = 'c';
    ptr->num = 34;
    ptr->f = 4.43f;
    uintptr_t a;
    a = serialize(ptr);
    float *bg = reinterpret_cast<float*>(a);
    std::cout << *bg << std::endl;
    Data *d;
    d = deserialize(a);
    
    
}