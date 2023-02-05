/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 05:11:52 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 23:22:05 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Default constractor has been called fron Intern class" << std::endl;
};

Intern::Intern(const Intern &obj) {
    std::cout << "Copy constractor has been called fron Intern class" << std::endl;
    *this = obj;
};

Intern& Intern::operator=(const Intern &other) {
    std::cout << "Copy assainement operator has been called fron Intern class" << std::endl;
    if (this != &other)
        return *this;
    return (*this);
};

Intern::~Intern() {
    std::cout << "Destractor has been called fron Intern class" << std::endl;
};

const char *Intern::FormNotFound::what () const throw() {
    return ("Form not found");
};

AForm *Intern::makeForm(std::string name, std::string target) {
    std::string FormName[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    AForm *func[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    
    for (int i = 0; i < 3; i++){
        if (FormName[i] == name) {
            std::cout << "Intern creates " << name << std::endl;
            for (int j = 0; j < 3; j++) {
                if (i != j)
                    delete func[j];
            }
            return func[i];
        }
    }
    for (int j = 0; j < 3; j++)
        delete func[j];
    throw Intern::FormNotFound();
};