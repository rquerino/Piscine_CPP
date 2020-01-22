/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:46:20 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/21 16:18:56 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <algorithm>

// Constructors
Intern::Intern(void) {}

Intern::Intern(Intern & copy) {
    *this = copy;
}

// Destructor
Intern::~Intern() {}


// Operator
Intern &    Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
}


// Others
Form*   Intern::makeForm(std::string name, std::string target) {
    std::string upcase = name;

	// convert string to upper case
    std::transform(upcase.begin(), upcase.end(),upcase.begin(), ::toupper);
 
    if (upcase == "SHRUBBERY CREATION") {
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	} else if (upcase == "ROBOTOMY REQUEST") {
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	} else if (upcase == "PRESIDENTIAL PARDON") {
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	} else {
        std::cout << "No valid form was created" << std::endl;
	    return NULL;
    }
}