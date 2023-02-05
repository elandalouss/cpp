/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 19:44:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("ayoub", 75);
        Form b("ana", 76, 67);
        Form c(b);
        // a.decrement();
        // a.increment();
        b.beSigned(a);
        a.signForm(b);
        //a.signForm(b);
        std::cout << b << std::endl;
        c = b;
        std::cout << c << std::endl;
        //std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;      
    }
    return 0;
}