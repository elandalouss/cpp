/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:51:14 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/02 22:20:57 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat {
    private :
        const std::string name;
        int               grade;
    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string e_name, int e_grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& other);
        void setGrade(int e_grade);
        int getGrade() const;
        std::string getName() const;
        void increment();
        void decrement();
    class GradeTooHighException : public std::exception {
        private :
            std::string message;
        public :
            GradeTooHighException(std::string msg) : message(msg){
                // char *what();
            }
    };
    
};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& obj);

#endif