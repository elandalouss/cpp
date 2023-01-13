/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:19:58 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:22:19 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string tmp_name) {
    name = tmp_name;
}

std::string Zombie::getName() {
    return (name);
}

Zombie::~Zombie() {
    std::cout << "the zombie " << name << " has destroyed" << std::endl;
}