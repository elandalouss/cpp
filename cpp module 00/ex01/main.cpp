/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:09:03 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/24 18:51:35 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

int main()
{
	std::string		cmd;
	PhoneBook		data;
	int				index;

	std::cout << std::endl << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	while(getline(std::cin, cmd))
	{
		if (std::cin.eof()) exit(1);
		if (cmd.compare("ADD") == 0) {
			data.fillClass();
			if (std::cin.eof()) exit(1);
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			data.contactTable();
			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;
			if (std::cin.eof())	exit(3);
			checkIndex(data, index);
		}
		else if (cmd.compare("EXIT") == 0 || std::cin.eof()) exit(1);
		else
			std::cout << std::endl << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	}
}