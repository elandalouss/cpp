/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:35 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/01 18:40:36 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor called from Brain class" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
};

Brain::Brain(const Brain& obj) {
    std::cout << "Copy constructor called from Brain class" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
};

Brain &Brain::operator=(const Brain& other) {
    std::cout << "Copy assainement operator called from Brain class" << std::endl;
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
};

Brain::~Brain() {
    std::cout << "Destructor called from Brain class" << std::endl;
};
