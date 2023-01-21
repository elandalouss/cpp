/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:09:03 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/21 16:46:01 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"


int main()
{
	std::string		cmd, indexStr;
	PhoneBook		data;
	int				index;

	std::cout << std::endl << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	while(true)
	{
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0){
			data.fillClass();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			data.contactTable();
			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;
			if (std::cin.fail() || index > 7 || index < 0)
			{
				std::cout << std::endl << "should entre a number between 0 and 7" << std::endl << std::endl;
				std::cin.clear();
			}
			else if (index <= 7)
				data.getInfo(index);
		}
		else if (cmd.compare("EXIT") == 0)
			exit(1);
		else
			std::cout << std::endl << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	}
}