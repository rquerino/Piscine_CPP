/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:54:44 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 23:05:07 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & copy) : Form(copy.getName(), 145, 137) {}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    (void)rhs;
    return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs) {
    if (rhs.getIsSigned() == true) {
        o << "Shrubbery Creation Form is targetted to " << rhs.getName() << " is signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    } else {
        o << "Shrubbery Creation Form is targetted to " << rhs.getName() << " is not signed and require a " << rhs.getGradeToSign();
        o << " grade to sign and a " << rhs.getGradeToExec() << " grade to execute." << std::endl;
    }
    return o;
}

// Others
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() == false)
        std::cout << "This form has to be signed before it can be executed." << std::endl;
    else if (this->getGradeToExec() < executor.getGrade())
        throw Form::GradeTooLowException();
    else
    {
        std::string     filename = this->getName() + "_shrubbery";
        std::ofstream   ofs(filename);
        ofs << "               ,@@@@@@@,                 \n"
            << "       ,,,.   ,@@@@@@/@@,  .oo8888o.     \n"
            << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    \n"
            << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   \n"
            << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   \n"
            << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    \n"
            << "   `&%\\ ` /%&'    |.|        \\ '|8'      \n"
            << "       |o|        | |         | |        \n"
            << "       |.|        | |         | |        \n"
            << "     \\/ ._\\//_/__/  ,\\_//__/\\/.  \\_//__/_\n";
        ofs.close();
        std::cout << "Form " << this->getName() << " has been executed by " << executor.getName() << std::endl;
    }
}