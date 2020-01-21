/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:30:04 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 22:54:24 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _isSigned;
        unsigned int const  _gradeToSign;
        unsigned int const  _gradeToExec;

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
        Form(void);
        Form(const Form & copy);
        Form(std::string n, unsigned int gts, unsigned int gte);

        // Destructor
        ~Form();

        // Operator
        Form &    operator=(Form const & rhs);

        // Getters
        std::string     getName(void) const;
        bool            getIsSigned(void) const;
        unsigned int    getGradeToSign(void) const;
        unsigned int    getGradeToExec(void) const;

        // Setters
        void            setSigned(void);

        // Others
        void            beSigned(Bureaucrat & b);
        virtual void    execute(Bureaucrat const & executor) const = 0;
        
        // IncrementDecrement grade
        void            incrementGrade(void);
        void            decrementGrade(void);

};

// Overload <<. If put outsite the class, it doesn't use 'friend'
std::ostream &          operator<<(std::ostream & o, Form const  & rhs);

#endif