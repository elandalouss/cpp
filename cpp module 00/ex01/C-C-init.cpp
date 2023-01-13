/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:34:52 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 17:38:31 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

void Contact::setData(std::string fn, std::string ln, std::string nn, int phNbr) {
    firstName = fn;
    lastName = ln;
    nickName = nn;
    phoneNumber = phNbr;
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
