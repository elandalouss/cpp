/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:30:36 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 22:40:13 by aelandal         ###   ########.fr       */
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
    this->target = other.target;
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor from ShrubberyCreationForm Class has been called" << std::endl;
};

std::string  ShrubberyCreationForm::getTarget() const {
    return (this->target);
};

bool	ShrubberyCreationForm::beSigned(Bureaucrat const &BurObj) {
    if (BurObj.getGrade() <= 145) {
        return (true);
    }
    else 
        throw AForm::GradeTooLowException();
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
    if (beSigned(executor) == true && executor.getGrade() <= 137) {
        std::string name = getTarget() + "_shrubbery";
        std::ofstream file(name);
        if (!file.is_open())
        {
            std::cerr << "failed to open file " << file << std::endl;
            return ;
        } else {
            file <<                "         ,@@@@@@@,\n"
                       " ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
                        ",&%%&%&&%,@@@@@/@@@@@@,88888/8o\n"
                    "  ,%&%&&%&&%,@@8888@@@/@@@888888/88'\n"
                   " %&&%&%&/%&&%@@@@/ /@@@8888888888'\n"
                   " %&&%/ %&%%&&@@ V /@@' `888 `/88'\n"
                   " `&% ` /%&'    |.|        \'|8'\n"
                       " |o|        | |         | |\n"
                      "  |.|        | |         | |\n"
                    "jgs \\/ ._//_/__/  ,_//__\\/.  _//__/_;\n";
        }
                        
            
    }
};
