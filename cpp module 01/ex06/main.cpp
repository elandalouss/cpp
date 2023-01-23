/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:03:25 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/23 18:28:43 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main() {
	std::string	cmd;
	Harl		obj1;

	while (true) {
		std::cout << "Enter you're command please : ";
		std::cin >> cmd;
		if (std::cin.eof()) {
			std::cerr << "enter a valid command [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
			std::cin.clear();
			return 0;
        }
        obj1.complain(cmd);
	}
    return 0;
}