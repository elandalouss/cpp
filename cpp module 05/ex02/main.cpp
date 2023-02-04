/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:35:41 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 21:20:35 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    try {
        PresidentialPardonForm *a = new PresidentialPardonForm();
    } catch(std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}