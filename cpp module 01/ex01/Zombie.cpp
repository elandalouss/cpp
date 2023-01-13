/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:30:27 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:32:13 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::~Zombie() {
    std::cout << name << " has destroyed" << std::endl;
}

void	Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string tmp_name) {
    name = tmp_name;
}

std::string Zombie::getName() {
    return (name);
}