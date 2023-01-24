/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:03:25 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/24 17:51:48 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main() {
	std::string	cmd;
	Harl		obj1;

	while (true) {
		std::cout << "Enter you're command please : ";
		getline(std::cin, cmd);
		if (std::cin.eof()) exit(0);
		while (cmd.length() == 0) {
			std::cout << "Enter you're command please : ";
			getline(std::cin, cmd);
			if (std::cin.eof()) exit(0);
		}
        obj1.complain(cmd);
	}
    return 0;
}