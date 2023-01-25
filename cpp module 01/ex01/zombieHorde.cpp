/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:32:59 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/25 18:50:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie	*zombieObj;
	
	if (N < 0) {
		std::cerr << "N must be grater than or equal to 0" << std::endl;
		exit (0);
	}
	zombieObj = new Zombie [N];
	for (int i = 0; i < N; i++)
		zombieObj[i].setName(name);
	tester(zombieObj, N);
	return (zombieObj);
}