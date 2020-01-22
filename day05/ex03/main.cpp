/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:37:49 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/21 16:16:50 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
    std::cout << "Testing Intern creating forms" << std::endl;
    Intern someRandomIntern;
    std::cout << "Random Intern created" << std::endl;	
	Form* rrf;
    std::cout << "Pointer to Form created" << std::endl;	
    std::cout << std::endl;	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("presiDeNtiAl ParDON", "Joe");
	rrf = someRandomIntern.makeForm("SHRUBBERY wow", "Bender");
    return 0;
}