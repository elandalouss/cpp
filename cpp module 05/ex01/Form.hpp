/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:45 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 18:14:09 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
		const std::string	name;
		bool				itSigned;
		const int 			grade_Sign;
		const int 			grade_Exec;
	public :
		Form();
		Form(std::string e_name, const int e_grade_Sign, const int e_grade_Exec);
		Form(const Form &obj);
		Form &operator=(const Form &other);
		~Form();
		std::string	getName() const;
		int	getGradeSign() const ;
		// int	getGradeExec();
		bool	getSigned() const ;
		void beSigned(Bureaucrat &BurObj);
		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what () const throw();
		};
		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what () const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif