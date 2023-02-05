/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:50:11 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 19:47:48 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("unnamed"), itSigned(0), grade_Sign(0), grade_Exec(0) {
    std::cout << "Default conatructor has been called from the AForm class" << std::endl;
    this->itSigned = false;
};

AForm::AForm(std::string e_name, const int e_grade_Sign, const int e_grade_Exec) 
    :name(e_name), itSigned(0), grade_Sign(e_grade_Sign), grade_Exec(e_grade_Exec) {
    std::cout << "Paramertized conatructor has been called from the AForm class" << std::endl;
    this->itSigned = false;
    if (this->grade_Sign > 150 || this->grade_Exec > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade_Sign < 1 || this->grade_Exec < 1 )
        throw Bureaucrat::GradeTooHighException();
};

AForm::AForm(const AForm &obj) : grade_Sign(obj.grade_Sign), grade_Exec(obj.grade_Exec) {
    std::cout << "Copy conatructor has been called from the AForm class" << std::endl;
    this->itSigned = false;
};

AForm &AForm::operator=(const AForm &other) {
    this->itSigned = other.itSigned;
    return (*this);
};

AForm::~AForm() {
    std::cout << "Destructor has been called from the AForm class" << std::endl;
};

std::string   AForm::getName() const {
    return (this->name);
};

int	AForm::getGradeSign() const {
    return (this->grade_Sign);
};

int AForm::getGradeExec() const {
    return (this->grade_Exec);
};

bool	AForm::getSigned() const {
    return (this->itSigned);
};

bool AForm::beSigned(Bureaucrat const &BurObj) {
    if (BurObj.getGrade() >= this->grade_Sign) {
        this->itSigned = true;
        return (true);
    }
    else 
        throw AForm::GradeTooLowException();
};

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
};

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
};

std::ostream& operator<<(std::ostream& stream, const AForm& obj) {
    std::cout << "AForm name : " << obj.getName() << std::endl;
    std::cout << "is Signed : ";
    if (obj.getSigned() == true)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    std::cout << "grade to signed : " << obj.getGradeSign() << std::endl;
    return stream;
}; 