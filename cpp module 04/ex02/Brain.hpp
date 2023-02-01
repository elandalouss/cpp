/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:13 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/01 18:40:15 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include "Brain.hpp"
class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& obj);
        Brain &operator=(const Brain& other);
        ~Brain();
};

#endif