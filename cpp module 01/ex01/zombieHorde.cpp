/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:32:59 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:33:16 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie	*zombieObj;

	zombieObj = new Zombie [N];
	for (int i = 0; i < N; i++)
		zombieObj[i].setName(name);
	return (zombieObj);
}