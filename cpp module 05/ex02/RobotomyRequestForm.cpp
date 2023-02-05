/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:28:35 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 23:04:24 by aelandal         ###   ########.fr       */
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
    this->target = other.target;
    return *this;
};

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor from RobotomyRequestForm Class has been called" << std::endl;
};

std::string RobotomyRequestForm::getTarget() {
    return (this->target);
};

void RobotomyRequestForm::execute(Bureaucrat const & executor){
    if (beSigned(executor) == true && executor.getGrade() <= 45) {
        srand(time(0));
        if (rand() % 2 == 0)
            std::cout << getTarget() << " has been robotomized successfully ." << std::endl;
        else
            std::cout << "the robotomy failed." << std::endl;
    }
};

bool	RobotomyRequestForm::beSigned(Bureaucrat const &BurObj) {
    if (BurObj.getGrade() <= 72)
        return (true);
    throw AForm::GradeTooLowException();
}