/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:52:57 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 01:28:02 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
    std::cout << "Default constructor from PresidentialPardonForm Class has been called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string e_target) 
    : target(e_target) {
    std::cout << "Parametrized constructor from PresidentialPardonForm Class has been called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {;
    std::cout << "Copy constructor from PresidentialPardonForm Class has been called" << std::endl;
    this->target = obj.target;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    std::cout << "Copy assainement from PresidentialPardonForm Class has been called" << std::endl;
    if (this != &other)
        this->target = other.target;
    return *this;
};

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor from PresidentialPardonForm Class has been called" << std::endl;
};

std::string PresidentialPardonForm::getTarget() const {
    return (this->target);
};

void PresidentialPardonForm::execute(Bureaucrat const & executor){
    if (this->getSigned() == true && executor.getGrade() >= 25 && executor.getGrade() >= 5) {
        std::cout << "Informs that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
};