/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:30:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 01:22:19 by aelandal         ###   ########.fr       */
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
    if (this != &other)
        this->target = other.target;
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor from ShrubberyCreationForm Class has been called" << std::endl;
};

std::string  ShrubberyCreationForm::getTarget() const {
    return (this->target);
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor){
    if (this->getSigned() == true && executor.getGrade() >= 145 && executor.getGrade() >= 137) {
        std::string name = getTarget() + "_shrubbery";
        std::ofstream file(name);
        if (!file.is_open())
        {
            std::cerr << "failed to open file " << file << std::endl;
            return ;
        } else
            file << "waaaaaa tari9";
            
    }
};