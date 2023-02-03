/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/03 15:14:12 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat a("ayoub", 2);
        Bureaucrat b(a);
        try {
            // a.decrement();
            a.increment();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;      
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}