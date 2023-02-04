/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:48:04 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 18:59:32 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private :
        const std::string name;
        int               grade;
        Bureaucrat();
    public :
        ~Bureaucrat();
        Bureaucrat(std::string e_name, int e_grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& other);
        void setGrade(int e_grade);
        int getGrade() const;
        std::string getName() const;
        void increment();
        void decrement();
        void signForm(AForm &objForm);

    class GradeTooHighException : public std::exception {
        public :
            virtual const char *what () const throw();            
    };

    class GradeTooLowException : public std::exception {
        public :
            virtual const char *what () const throw();            
    };

};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& obj);

#endif