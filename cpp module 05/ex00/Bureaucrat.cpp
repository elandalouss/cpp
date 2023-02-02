/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:32:06 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/02 23:19:40 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Default constructor from Bureaucrat class has been called" << std::endl;
    int a = 1, b = 150;
    srand(time(NULL));
    this->grade = a + rand() % b - a + 1;
};

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name){
    std::cout << "Copy constructor from Bureaucrat class has been called" << std::endl;
    this->grade = obj.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Copy assainement operator from Bureaucrat class has been called" << std::endl;
    if (this != &other)
        *this = other;
    return *this;
};

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor from Bureaucrat class has been called" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(char *msg) : message(msg) {};

const char *Bureaucrat::GradeTooHighException::what() const  {
    return (message);
};

Bureaucrat::Bureaucrat(std::string e_name, int e_grade) 
    : name(e_name) {
    std::cout << "Parametrised constructor from Bureaucrat class has been called" << std::endl;
    this->grade = e_grade;
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
    if (this->grade == 1) {
        std::cout << "out of range" << std::endl;
    } else {
        this->grade--;
    }
};

void Bureaucrat::decrement() {
    if (this->grade == 150) {
        std::cout << "out of range" << std::endl;
    } else {
        this->grade++;
    }
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj) {
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return stream;
};