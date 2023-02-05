/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:35:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 23:22:21 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main() {
    try {
        Intern someRandomIntern;
        AForm* rrf;
        Bureaucrat a("hello", 1);
        RobotomyRequestForm  b("hellllllllllllll");
        rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
        rrf->execute(a);
        a.signForm(b);
        
    } catch(std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}