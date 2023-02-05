/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:52:59 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 01:24:39 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string e_target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
        void execute(Bureaucrat const & executor);
        std::string getTarget() const;
};

#endif