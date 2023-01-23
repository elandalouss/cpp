/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C-C-init.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:34:52 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/22 18:45:05 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

void Contact::setData(std::string fn, std::string ln, std::string nn, int phNbr, std::string ds) {
    firstName = fn;
    lastName = ln;
    nickName = nn;
    phoneNumber = phNbr;
    darkestSecret = ds;
}

std::string	Contact::getFirstName() {
    return firstName;
}

std::string	Contact::getLastName() {
    return lastName;
}

std::string	Contact::getNeckNameName() {
    return nickName;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}

int 		Contact::getPhoneNumber() {
    return phoneNumber;
}
