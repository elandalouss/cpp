/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:00:59 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 16:29:31 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"

class HumanA {
	private :
		std::string		name;
		Weapon			&wpnA;
	public :
		void    attack();
		HumanA  (std::string name, Weapon &wA);
};

#endif