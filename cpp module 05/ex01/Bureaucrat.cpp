/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:32:06 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/05 22:19:45 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Default constructor from Bureaucrat class has been called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name){
    std::cout << "Copy constructor from Bureaucrat class has been called" << std::endl;
    this->grade = obj.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Copy assainement operator from Bureaucrat class has been called" << std::endl;
    this->grade = other.grade;
    return *this;
};

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor from Bureaucrat class has been called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade Too High");
};

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low");
};

Bureaucrat::Bureaucrat(std::string e_name, int e_grade) 
    : name(e_name) {
    std::cout << "Parametrised constructor from Bureaucrat class has been called" << std::endl;
    this->grade = e_grade;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
};    

void Bureaucrat::setGrade(int e_grade) {
    this->grade = e_grade;
};

int Bureaucrat::getGrade() const {
    return this->grade;
};

std::string Bureaucrat::getName() const {
    return this->name;
};

void Bureaucrat::increment() {
    std::cout << "increment the grade" << std::endl;
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
};

void Bureaucrat::decrement() {
    std::cout << "decrement the grade" << std::endl;
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
};

void Bureaucrat::signForm(Form &objForm) {
    if (objForm.getSigned() == true) {
        std::cout << this->name << " couldn’t sign " << objForm.getName() << " because " << "Form is already signed" << std::endl;
    }
    else if (objForm.getGradeSign() >= this->getGrade()) {
        std::cout << this->name << " signed " << objForm.getName() << std::endl;
        objForm.beSigned(*this);
    }
    else
        std::cout << this->name << " couldn’t sign " << objForm.getName() << " because " << "grade is too Low." << std::endl;
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj) {
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return stream;
};