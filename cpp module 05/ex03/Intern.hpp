/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 05:11:48 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 05:29:01 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern {
    public :
        Intern();
        Intern(const Intern &obj);
        Intern& operator=(const Intern &other);
        ~Intern();
        AForm *makeForm(std::string name, std::string target);
};

#endif