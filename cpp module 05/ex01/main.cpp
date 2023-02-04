/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 18:28:45 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("ayoub", 65);
        Form b("ana", 76, 67);
        // a.decrement();
        // a.increment();
        // b.beSigned(a);
        a.signForm(b);
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;      
    }
    return 0;
}