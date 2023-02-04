/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:30:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 21:02:27 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
    std::cout << "Default constructor from ShrubberyCreationForm Class has been called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string e_target) 
    : target(e_target) {
    std::cout << "Parametrized constructor from ShrubberyCreationForm Class has been called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {;
    std::cout << "Copy constructor from ShrubberyCreationForm Class has been called" << std::endl;
    this->target = obj.target;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    std::cout << "Copy assainement from ShrubberyCreationForm Class has been called" << std::endl;
    if (this != &obj)
        this->target = other.target;
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor from ShrubberyCreationForm Class has been called" << std::endl;
};