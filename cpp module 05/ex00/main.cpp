/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:31:32 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/02 21:55:16 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat a("ayoub", 54);
    Bureaucrat b(a);
    // a.decrement();
    a.increment();
    std::cout << a << std::endl;
    return 0;
}