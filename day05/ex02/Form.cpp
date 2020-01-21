/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:30:06 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 17:14:10 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
# include "Bureaucrat.hpp"

// Exceptions
// GradeTooHightException
Form::GradeTooHighException::GradeTooHighException(void) {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy) {
    *this = copy;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const & rhs) {
    (void)rhs;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

// GradeTooLowException
Form::GradeTooLowException::GradeTooLowException(void) {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException & copy) {
    *this = copy;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const & rhs) {
    (void)rhs;
    return *this;
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

// Constructors
Form::Form(const Form & copy) : _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
    *this = copy;
}

Form::Form(std::string n, unsigned int gts, unsigned int gte) : _name(n), _isSigned(false), _gradeToSign(gts), _gradeToExec(gte) {
    if (gts < 1 || gte < 1)
        throw Form::GradeTooHighException();
    else if (gts > 150 || gte > 150)
        throw Form::GradeTooLowException();
}

// Destructors
Form::~Form() {}

// Operators
Form &  Form::operator=(Form const & rhs) {
    // _name, _gradeToSign and _gradeToExec are const
    this->_isSigned = rhs._isSigned;

    return *this;
}
// Overload <<
std::ostream &  operator<<(std::ostream & o, const Form & rhs) {
    if (rhs.getIsSigned() == true) {
        o << "Form " << rhs.getName() << " is signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    } else {
        o << "Form " << rhs.getName() << " is not signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    }
    return o;
}

// Getters
std::string Form::getName(void) const {
    return this->_name;
}

bool            Form::getIsSigned(void) const {
    return this->_isSigned;
}

unsigned int    Form::getGradeToSign(void) const {
    return this->_gradeToSign;
}

unsigned int    Form::getGradeToExec(void) const {
    return this->_gradeToExec;
}

// Setters
void            Form::setSigned(void) {
    this->_isSigned = true;
}

// Others
void            Form::beSigned(Bureaucrat & b) {
    if (this->_isSigned == true)
        b.signForm(this->_name, "the form already signed");
    else if (this->_gradeToSign < b.getGrade()) {
        b.signForm(this->_name, "grade is too low");
        throw Form::GradeTooLowException();
    }
    else {
        this->_isSigned = true;
        b.signForm(this->_name, "OK");
    }
}