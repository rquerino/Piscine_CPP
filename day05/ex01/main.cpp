/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:37:49 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 17:13:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    std::cout << "Test 1: Bureaucrat with low grade trying to sign a high grade form" << std::endl;
    try
    {
        Bureaucrat bill = Bureaucrat("Bill", 120);
        std::cout << bill;
		Form loan = Form("Loan Form", 40, 20);
		std::cout << loan;
        loan.beSigned(bill);
    }
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

    std::cout << std::endl;
    std::cout << "Test 2: High grade bureaucrat signing low grade form" << std::endl;
    try
    {
        Bureaucrat martha = Bureaucrat("Martha", 10);
        std::cout << martha;
		Form regist = Form("Register Form", 120, 80);
		std::cout << regist;
		regist.beSigned(martha);
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