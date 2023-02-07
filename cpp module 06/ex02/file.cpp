/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:02:11 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/07 18:16:57 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

Base::~Base() {};

Base* generate(void){
    srand(time(0));
    if ((rand() % 3) == 0)
        return (new A);
    else if ((rand() % 3) == 1)
        return (new B);
    else 
        return (new C);  
};

void identify(Base& p){
    try {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {}
    try {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    } catch (std::exception &e) {}
    try {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    } catch (std::exception &e) {}

};

void identify(Base* p){
    A *a = dynamic_cast<A*>(p);
    if (a != nullptr)
        std::cout << "A" << std::endl;
    B *b = dynamic_cast<B*>(p);
    if (b != nullptr)
        std::cout << "B" << std::endl;
    C *c = dynamic_cast<C*>(p);
    if (c != nullptr)
        std::cout << "C" << std::endl;
};