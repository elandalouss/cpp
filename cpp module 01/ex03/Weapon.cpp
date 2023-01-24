/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:07:45 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/24 16:45:03 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include <iostream>

void Weapon::setType(std::string weaponType) {
    type = weaponType;
}

const   std::string& Weapon::getType() {
    return (type);
}

Weapon::Weapon (std::string typeName) {
    type = typeName;
}

Weapon::~Weapon() {
    std::cout << "distructor called from Weapen class" << std::endl;
}
