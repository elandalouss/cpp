/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:14:45 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 14:06:30 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

void HumanB::attack() {
    std::cout << name << " attacks with their " << wpnB->getType() << std::endl;
}

HumanB::HumanB (std::string name){
    this->name = name;
    this->wpnB = NULL;
}

void HumanB::setWeapon(Weapon	&wpn) {
    this->wpnB = &wpn;
}