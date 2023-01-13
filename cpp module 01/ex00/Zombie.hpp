/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:16:14 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:25:05 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
    private:
        std::string	name;
    public:
		~Zombie();
        void        announce(void);
		void        setName(std::string tmp_name);
		std::string getName();
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif