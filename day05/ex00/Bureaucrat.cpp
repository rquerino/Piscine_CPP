/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:40:37 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

// Exceptions
// GradeTooHightException
Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy) {
    *this = copy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs) {
    (void)rhs;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high! It can't be less than 1.");
}

// GradeTooLowException
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
    *this = copy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs) {
    (void)rhs;
    return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low! It can't be more than 150.");
}

// Constructors
Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) {
    *this = copy;
}

Bureaucrat::Bureaucrat(std::string n, unsigned int g) : _name(n) {
    if (g < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (g > 150)
        throw Bureaucrat::GradeTooLowException();
    else 
        this->_grade = g;
}

// Destructors
Bureaucrat::~Bureaucrat() {}

// Operators
Bureaucrat &  Bureaucrat::operator=(Bureaucrat const & rhs) {
    // _name is const
    // this->_name = rhs._name;
    this->_grade = rhs._grade;

    return *this;
}
// Overload <<
std::ostream &  operator<< (std::ostream & o, const Bureaucrat & rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;

    return o;
}

// Getters
std::string Bureaucrat::getName(void) const {
    return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

// Increment/Decrement grade
void    Bureaucrat::incrementGrade(void) {
    
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += 1;    
}
void    Bureaucrat::decrementGrade(void) {
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= 1;  
}