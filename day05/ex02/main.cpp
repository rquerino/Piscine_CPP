/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:37:49 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 23:02:59 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main() {
    std::cout << "Test 1: High graded Bureaucrat signing and executing all 3 forms" << std::endl;
    try
    {
        Bureaucrat bill = Bureaucrat("Bill", 3);
        std::cout << bill;
		ShrubberyCreationForm form1("Home");
		std::cout << "Form 1: ";
		std::cout << form1;
		RobotomyRequestForm form2("C3PO");
		std::cout << "Form 2: ";
		std::cout << form2;
		PresidentialPardonForm form3("Joe");
		std::cout << "Form 3: ";
		std::cout << form3;
		form1.beSigned(bill);
		bill.executeForm(form1);
		form2.beSigned(bill);
		bill.executeForm(form2);
		form3.beSigned(bill);
		bill.executeForm(form3);
    }
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

    std::cout << std::endl;
    std::cout << "Test 1: Average graded Bureaucrat signing and executing all 3 forms" << std::endl;
    try
    {
        Bureaucrat martha = Bureaucrat("Martha", 90);
        std::cout << martha;
		ShrubberyCreationForm form1("Garden");
		std::cout << "Form 1: ";
		std::cout << form1;
		RobotomyRequestForm form2("C3PO");
		std::cout << "Form 2: ";
		std::cout << form2;
		PresidentialPardonForm form3("Joe");
		std::cout << "Form 3: ";
		std::cout << form3;
		form1.beSigned(martha);
		martha.executeForm(form1);
		form2.beSigned(martha);
		martha.executeForm(form2);
		form3.beSigned(martha);
		martha.executeForm(form3);
    }
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}