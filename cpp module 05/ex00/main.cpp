/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/02 23:46:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat a("ayoub", 54);
    Bureaucrat b(a);
    try {
        throw Bureaucrat::GradeTooHighException;
    } catch (...) {
        // a.decrement();
        a.increment();
        std::cout << a << std::endl;      
    }
    return 0;
}