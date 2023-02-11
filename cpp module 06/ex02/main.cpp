/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:01:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 00:21:34 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "file.hpp"
#include <iostream>

class Base{
    virtual void func() {std::cout << "hello" << std::endl;};
};
class A : public Base {
    ;
};
class B : public Base {
    ;
};


int main() {
    Base *base = generate();
    identify(base);
    Base &base_ref = *base;
    identify(base_ref);
    std::cout << &base_ref << std::endl;
    return 0;

    // Base *a;
    // a = new Base;
    
    // A *k;
    // k = new A();
    // // k = dynamic_cast<A*>(a);    
    // B *u;
    // u = dynamic_cast<B*>(k);
    // std::cout << u << std::endl;
}