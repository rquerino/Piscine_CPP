/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:37:49 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 15:04:55 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    std::cout << "Test 1: Already high graded bureaucrat Bill getting a better grade" << std::endl;
    try
    {
        Bureaucrat bill = Bureaucrat("Bill", 2);
        std::cout << bill;
        std::cout << "Decrementing Bill's grade" << std::endl;
        bill.decrementGrade();
        std::cout << bill;
        std::cout << "Decrementing Bill's grade" << std::endl;
        bill.decrementGrade();
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
    std::cout << "Test 2: Already low graded bureaucrat Martha getting a lower grade" << std::endl;
    try
    {
        Bureaucrat martha = Bureaucrat("Martha", 149);
        std::cout << martha;
        std::cout << "Incrementing Martha's grade" << std::endl;
        martha.incrementGrade();
        std::cout << martha;
        std::cout << "Incrementing Martha's grade" << std::endl;
        martha.incrementGrade();
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
    std::cout << "Test 3: Creating a bureaucrat with an invalid grade (180)" << std::endl;
    try
    {
        Bureaucrat jones = Bureaucrat("Jones", 180);
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

    return 0;
}