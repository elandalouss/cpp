/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:49:54 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 00:16:41 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private :
		const std::string	name;
		bool				itSigned;
		const int 			grade_Sign;
		const int 			grade_Exec;
	public :
		AForm();
		AForm(std::string e_name, const int e_grade_Sign, const int e_grade_Exec);
		AForm(const AForm &obj);
		AForm &operator=(const AForm &other);
		~AForm();
		std::string	getName() const;
		int		getGradeSign() const ;
		int		getGradeExec() const ;
		bool	getSigned() const ;
		void	beSigned(Bureaucrat &BurObj);
		virtual void execute(Bureaucrat const & executor) = 0;
		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what () const throw();
		};
		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what () const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const AForm& obj);

#endif