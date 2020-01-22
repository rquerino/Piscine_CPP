/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:03:02 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 22:59:01 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

// Constructors
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & copy) : Form(copy.getName(), 72, 45) {}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {}

// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    (void)rhs;
    return *this;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs) {
    if (rhs.getIsSigned() == true) {
        o << "Robotomy Request Form is targetted to " << rhs.getName() << " is signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    } else {
        o << "Robotomy Request Form is targetted to " << rhs.getName() << " is not signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    }
    return o;
}

// Others
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        std::cout << "This form has to be signed before it can be executed." << std::endl;
    else if (this->getGradeToExec() < executor.getGrade())
        throw Form::GradeTooLowException();
    else
    {
        int n = rand() % 2;
        std::cout << "* ??onomatopoeia for drilling noises?? *" << std::endl;
        if (n == 1)
			std::cout << this->getName() << " has been robotomized" << std::endl;
		else
			std::cout << this->getName() << " is a failure" << std::endl;
    }
}