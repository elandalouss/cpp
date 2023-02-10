/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:00:23 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/10 06:39:17 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void func() {
        try {
        Span sp = Span(5);
        sp.addNumber(3);
        sp.addNumber(9);
        // sp.addNumber(189);

        // std::vector<int> *arr = sp.getVector();
        // for (int i = 0; i < 4; i++)
        //     std::cout << arr->at(i) << std::endl;
        
        std::cout << sp.shortestSpan() << std::endl;
        int hight = sp.longestSpan();
        std::cout << "hight : " << hight << std::endl;
        
            
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