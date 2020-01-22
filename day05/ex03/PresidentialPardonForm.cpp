/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:34:39 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 22:58:54 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

// Constructors
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy) : Form(copy.getName(), 25, 5) {}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) {}

// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    (void)rhs;
    return *this;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs) {
    if (rhs.getIsSigned() == true) {
        o << "Presidential Pardon Form is targetted to " << rhs.getName() << " is signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    } else {
        o << "Presidential Pardon Form is targetted to " << rhs.getName() << " is not signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    }
    return o;
}

// Others
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        std::cout << "This form has to be signed before it can be executed." << std::endl;
    else if (this->getGradeToExec() < executor.getGrade())
        throw Form::GradeTooLowException();
    else
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}