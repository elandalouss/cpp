/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:28:35 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 21:01:56 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "Default constructor from RobotomyRequestForm Class has been called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string e_target) 
    : target(e_target) {
    std::cout << "Parametrized constructor from RobotomyRequestForm Class has been called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) {;
    std::cout << "Copy constructor from RobotomyRequestForm Class has been called" << std::endl;
    this->target = obj.target;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    std::cout << "Copy assainement from RobotomyRequestForm Class has been called" << std::endl;
    if (this != &obj)
        this->target = other.target;
    return *this;
};

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor from RobotomyRequestForm Class has been called" << std::endl;
};