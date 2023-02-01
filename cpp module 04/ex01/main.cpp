/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:22 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/01 18:40:23 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	Animal *obj[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) 
			obj[i] = new Dog();
		else
			obj[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		delete obj[i];
	return 0;
}