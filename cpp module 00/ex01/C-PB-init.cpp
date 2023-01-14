/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C-PB-init.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:28 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 16:21:09 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

int i = 0;

void PhoneBook::fillClass() {
    std::string firstName, lastName, nickName, darkestSecret;
    int	phoneNumber;
    std::cout << "Enter your firstName : ";
    getline(std::cin, firstName);
    while (firstName.length() == 0){
        std::cout << "Enter your firstName : ";
        getline(std::cin, firstName);
    }


    std::cout << "Enter your lastName : ";
    getline(std::cin, lastName);
    while (lastName.length() == 0) {
        std::cout << "Enter your lastName : ";
        getline(std::cin, lastName);
    }

        
    std::cout << "Enter your nickName : ";
    getline(std::cin, nickName);
    while (nickName.length() == 0) {
        std::cout << "Enter your nickName : ";
        getline(std::cin, nickName);    
    }

        
    std::cout << "Enter your darkest secret : ";
    getline(std::cin, darkestSecret);
    while (darkestSecret.length() == 0) {
        std::cout << "Enter your darkest secret : ";
        getline(std::cin, darkestSecret);
    }
    std::cout << "Enter your phoneNumber : ";
    std::cin >> phoneNumber;

    if (std::cin.fail())
    {
        std::cout << std::endl << "should entre a number" << std::endl << std::endl;
        std::cin.clear();
        return ;
    }
    cnt[i].setData(firstName, lastName, nickName, phoneNumber);
    if (i == 7)
        i = -1;
    i++;
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
    std::cout << "____________________________________________" << std::endl;
}

void PhoneBook::getInfo(int index) {
    std::cout << index << "|" << std::setw(10) << cnt[index].getFirstName().substr(0, 9);
    putDot(cnt[index].getFirstName());
    std::cout << "|" << std::setw(10) << cnt[index].getLastName().substr(0, 9);
    putDot(cnt[index].getLastName());
    std::cout << "|" << std::setw(10) << cnt[index].getNeckNameName().substr(0, 9);
    putDot(cnt[index].getNeckNameName());
    std::cout << "|" << std::endl;
}
