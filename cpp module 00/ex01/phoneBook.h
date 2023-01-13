/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:17:11 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:04:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <iomanip>

class Contact{
	private :
		int         phoneNumber;
		std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
	public :
		void	setData(std::string fn, std::string ln, std::string nn, int phNbr);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNeckNameName();
};

class PhoneBook{
	private :
		Contact	cnt[8];
	public :
		void    fillClass();
		void    contactTable();
		void    getInfo(int index);
};

void    putDot(std::string	str);
void    colomsManager(std::string	str);

#endif