/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:04:05 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/24 16:46:29 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPEN_H
#define WEAPEN_H
#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
		Weapon(std::string  typeName);
        const std::string&  getType();
        void                setType(std::string weaponType);
		~Weapon();
};

#endif
