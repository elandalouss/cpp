/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initFunction.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:44:51 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 17:45:02 by aelandal         ###   ########.fr       */
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