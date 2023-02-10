/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:00:23 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/10 23:42:58 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void func() {
        try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "short : " << sp.shortestSpan() << std::endl;
        std::cout << "hight : " << sp.longestSpan() << std::endl;
    } catch (std::exception  &e){
        std::cout << e.what() << std::endl;       
    }
}

int main()
{
    func();
    // system ("leaks Span");
    return 0;
}