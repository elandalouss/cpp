/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/03 17:44:50 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("ayoub", 1);
        Bureaucrat b(a);
        // a.decrement();
        a.increment();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;      
    }
    return 0;
}