/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:12:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/14 14:32:20 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

void HumanA::attack() {
    std::cout << name << " attacks with their " << wpnA.getType() << std::endl;
}