/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:02:31 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/25 18:40:09 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}
void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    int a = 0; 
    a += !level.compare("DEBUG");
    a += (!level.compare("INFO")) * 10;
    a += (!level.compare("WARNING")) * 100;
    a += (!level.compare("ERROR")) * 1000;
    switch (a)
    {
        case 1:
            this->debug();
            std::cout << std::endl;
        case 10:
            this->info();
            std::cout << std::endl;
        case 100:
            this->warning();
            std::cout << std::endl;
        case 1000:
            this->error();
            std::cout << std::endl;
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;			}
    }