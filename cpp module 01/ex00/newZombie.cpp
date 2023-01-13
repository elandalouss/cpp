/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:16:03 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:19:42 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)        
{
	Zombie	*minizombie;

	minizombie = new Zombie();
	minizombie->setName(name);
	return minizombie;
}
