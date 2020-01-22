/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:46:21 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/21 15:06:34 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Form;

class Intern {
    public:
        // Constructors
        Intern(void);
        Intern(Intern & copy);

        // Destructor
        virtual ~Intern();

        // Operator
        Intern &    operator=(Intern const & rhs);

        // Others
        Form*       makeForm(std::string name, std::string target);
};

#endif