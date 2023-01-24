/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C-PB-init.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:28 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/24 13:13:14 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

int g_i = 0;
int g_j = 0;


void PhoneBook::fillClass() {
    std::string firstName, lastName, nickName, darkestSecret;
    int	phoneNumber;
    std::cout << "Enter your firstName : ";
    getline(std::cin, firstName);
    if (std::cin.fail())
        exit (1);
    while (firstName.length() == 0){
        std::cout << "Enter your firstName : ";
        getline(std::cin, firstName);
    }


    std::cout << "Enter your lastName : ";
    getline(std::cin, lastName);
    if (std::cin.fail())
        exit (1);
    while (lastName.length() == 0) {
        std::cout << "Enter your lastName : ";
        getline(std::cin, lastName);
    }

        
    std::cout << "Enter your nickName : ";
    getline(std::cin, nickName);
    if (std::cin.fail())
        exit (1);
    while (nickName.length() == 0) {
        std::cout << "Enter your nickName : ";
        getline(std::cin, nickName);    
    }

        
    std::cout << "Enter your darkest secret : ";
    getline(std::cin, darkestSecret);
    if (std::cin.fail())
        exit (1);
    while (darkestSecret.length() == 0) {
        std::cout << "Enter your darkest secret : ";
        getline(std::cin, darkestSecret);
    }
    std::cout << "Enter your phoneNumber : ";
    std::cin >> phoneNumber;

    if (std::cin.fail() || std::cin.eof())
    {
        std::cout << std::endl << "should entre a number" << std::endl << std::endl;
        std::cin.clear();
        return ;
    }
    cnt[g_i].setData(firstName, lastName, nickName, phoneNumber, darkestSecret);
    if (g_i == 7)
        g_i = -1;
    if (g_j < 8)
        g_j++;
    g_i++;
}

void	PhoneBook::contactTable() {
    int it = 0;
        std::cout << std::endl;
        std::cout << std::setw(10) << "index ___ |";
        std::cout << std::setw(10) << "first name";
            std::cout << "|";
        std::cout << std::setw(10) << "last name";
            std::cout << "|";
        std::cout << std::setw(10) << "nickname";
            std::cout << "|" << std::endl;   
    while (8 > it)
    {
        std::cout << "____________________________________________" << std::endl;
        std::cout << std::setw(10) << it;
        std::cout << "|";
        colomsManager(cnt[it].getFirstName());
        std::cout << "|";
        colomsManager(cnt[it].getLastName());
        std::cout << "|";
        colomsManager(cnt[it].getNeckNameName());
        std::cout << "|"<< std::endl;
        it++;
    }
}

void PhoneBook::getInfo(int index) {
    if (g_j > index) {
        std::cout << "index : " << index << std::endl;
        std::cout << "first name : " << cnt[index].getFirstName() << std::endl;;
        std::cout << "last name : " << cnt[index].getLastName() << std::endl;
        std::cout << "nickname : " << cnt[index].getNeckNameName() << std::endl;
        std::cout << "darkest secret : " << cnt[index].getDarkestSecret() << std::endl;
        std::cout << "phone name : " << cnt[index].getPhoneNumber() << std::endl;
    } else
        std::cout << std::endl << "empty field" << std::endl;
}
