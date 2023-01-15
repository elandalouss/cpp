/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:04:05 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 19:20:50 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPEN_H
#define WEAPEN_H
#include <iostream>



class Weapon{
    private :
        std::string type;
    public :
        void                setType(std::string    weaponType);
        const std::string&  getType();
		Weapon(std::string typeName);
		~Weapon();
};

#endif