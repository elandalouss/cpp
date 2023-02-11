/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:00:23 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 02:41:25 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(100);
    try {
        sp.ultimateAddNumber(100);
        std::cout << "short : " << sp.shortestSpan() << std::endl;
        std::cout << "hight : " << sp.longestSpan() << std::endl;
    } catch (std::exception  &e){
        std::cout << e.what() << std::endl;       
    }
    return 0;
}