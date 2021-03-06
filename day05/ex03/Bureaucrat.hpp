/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:26:30 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 22:54:08 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        unsigned int        _grade; // 1 highest, 150 lowest


    public:
        // Exceptions (http://www.cplusplus.com/reference/exception/exception/)
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(void);
                GradeTooHighException(GradeTooHighException const & copy);

                virtual ~GradeTooHighException(void) throw();

                GradeTooHighException&  operator=(GradeTooHighException const & rhs);

                virtual const char*     what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(void);
                GradeTooLowException(GradeTooLowException const & copy);

                virtual ~GradeTooLowException(void) throw();

                GradeTooLowException&   operator=(GradeTooLowException const  & rhs);

                virtual const char*     what() const throw();
        };

        // Constructors
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat & copy);
        Bureaucrat(std::string n, unsigned int g);

        // Destructor
        ~Bureaucrat();

        // Operator
        Bureaucrat &    operator=(Bureaucrat const & rhs);

        // Getters
        std::string     getName(void) const;
        unsigned int    getGrade(void) const;

        // Others
        void            incrementGrade(void);
        void            decrementGrade(void);
        void            signForm(std::string formname, std::string reason);
        void            executeForm(Form const & form);
};

// Overload <<. If put outsite the class, it doesn't use 'friend'
std::ostream &          operator<<(std::ostream & o, Bureaucrat const  & rhs);

#endif