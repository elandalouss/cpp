/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initFunction.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:44:51 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/23 19:56:10 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"


void putDot(std::string	str)
{
	if (str.length() > 10)
		std::cout << ".";
}

void	colomsManager(std::string	str) {
	if (str.length() >= 10)
	{
		std::cout << str.substr(0, 9);
		putDot(str);
	}
	else
		std::cout << std::setw(10) << str;
}

void checkIndex(PhoneBook &data, int index) {
	if (std::cin.eof() || index < 0) {
		std::cout << std::endl << "Enter a number between 0 and 7" << std::endl << std::endl;
		std::cin.clear();
	}
	else if (index <= 7)
		data.getInfo(index);
}