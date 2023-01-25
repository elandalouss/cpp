/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:07:01 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:07:01 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *new_zombie;

	new_zombie = newZombie("za3tot");
	new_zombie->announce();
	randomChump("za3tot a5or");
	delete(new_zombie);
    return 0;
}
