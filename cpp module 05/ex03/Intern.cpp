/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 05:11:52 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 05:36:14 by aelandal         ###   ########.fr       */
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
    if (this == &other)
        return *this;
    return (*this);
};

Intern::~Intern() {
    std::cout << "Destractor has been called fron Intern class" << std::endl;
};



// AForm *Intern::makeForm(std::string name, std::string target) {
//     AForm *a = new A;
//     return a;
// };