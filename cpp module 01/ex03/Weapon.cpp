/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:07:45 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 17:47:48 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

void Weapon::setType(std::string    weaponType) {
    type = weaponType;
}

const   std::string& Weapon::getType() const {
    return (type);
}

Weapon::Weapon (std::string typeName) {
    type = typeName;
}

Weapon::~Weapon() {}