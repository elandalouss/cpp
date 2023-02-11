/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:41:25 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/11 06:46:23 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(0);
        vec.push_back(1);
        std::cout << ::easyfind<int>(vec, 1) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}