/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:35:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 01:28:38 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
    try {
        Bureaucrat a("ayoub", 1);
        ShrubberyCreationForm b("ana lol");
        b.execute(a);

    } catch(std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}