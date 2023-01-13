/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:27:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 19:33:25 by aelandal         ###   ########.fr       */
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

void    tester(Zombie	*zombieObj, int N);
Zombie* zombieHorde(int N, std::string name);

#endif