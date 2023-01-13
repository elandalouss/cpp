/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:07:45 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 20:11:43 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

void Weapon::setType(std::string    weaponType) {
    type = weaponType;
}

std::string Weapon::getType() {
    return (type);
}

Weapon::Weapon (std::string typeName) {
    type = typeName;
}