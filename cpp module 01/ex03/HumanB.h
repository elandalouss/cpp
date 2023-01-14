/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:03:53 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 17:52:22 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.h"

class HumanB {
	private :
		std::string		name;
		Weapon			*wpnB;
	public :
		void    attack();
		void    setWeapon(Weapon	&wpn);
        HumanB  (std::string name);
		~HumanB ();
};

#endif