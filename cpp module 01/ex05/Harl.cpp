/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:56:42 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/13 22:00:31 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}
void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {

    void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int a = 0;
    a += !level.compare("DEBUG");
    a += (!level.compare("INFO")) * 10;
    a += (!level.compare("WARNING")) * 100;
    a += (!level.compare("ERROR")) * 1000;
    switch (a)
    {
        case 1:
            (this->*func[0])();
            break;
        case 10:
            (this->*func[1])();
            break;
        case 100:
            (this->*func[2])();
            break;  
        case 1000:
            (this->*func[3])();
            break;
    }
}