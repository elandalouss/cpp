/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:48 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/04 18:24:45 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("unnamed"), itSigned(0), grade_Sign(0), grade_Exec(0) {
    std::cout << "Default conatructor has been called from the Form class" << std::endl;
    this->itSigned = false;
};

Form::Form(std::string e_name, const int e_grade_Sign, const int e_grade_Exec) 
    :name(e_name), itSigned(0), grade_Sign(e_grade_Sign), grade_Exec(e_grade_Exec) {
    std::cout << "Paramertized conatructor has been called from the Form class" << std::endl;
    this->itSigned = false;
    if (this->grade_Sign > 150 || this->grade_Exec > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade_Sign < 1 || this->grade_Exec < 1 )
        throw Bureaucrat::GradeTooHighException();
};

Form::Form(const Form &obj) : grade_Sign(obj.grade_Sign), grade_Exec(obj.grade_Exec) {
    std::cout << "Copy conatructor has been called from the Form class" << std::endl;
    this->itSigned = false;
};

Form &Form::operator=(const Form &other) {
    if (this != &other)
        *this = other;
    return (*this);
};

Form::~Form() {
    std::cout << "Destructor has been called from the Form class" << std::endl;
};

std::string   Form::getName() const {
    return (this->name);
};

int	Form::getGradeSign() const {
    return (this->grade_Sign);
};

// const int Form::getGradeExec() {
//     return (this->gradeExec);
// };

bool	Form::getSigned() const {
    return (this->itSigned);
};

void Form::beSigned(Bureaucrat &BurObj) {
    if (BurObj.getGrade() >= this->grade_Sign)
        this->itSigned = true;
    else 
        throw Form::GradeTooLowException();
};

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
};

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
};

std::ostream& operator<<(std::ostream& stream, const Form& obj) {
    std::cout << "Form name : " << obj.getName() << std::endl;
    std::cout << "is Signed : ";
    if (obj.getSigned() == true)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    std::cout << "grade to signed : " << obj.getGradeSign() << std::endl;
    return stream;
}; 