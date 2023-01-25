/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:29:13 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:29:13 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void tester(Zombie	*zombieObj, int N)
{
	for (int i = 0; i < N; i++)
		zombieObj[i].announce();
}

int main()
{
	Zombie	*zombieObj;
	
	zombieObj = zombieHorde(5, "zombozo");
	delete[] zombieObj;
    return 0;
}