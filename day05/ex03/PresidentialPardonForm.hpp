/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:33:53 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 22:34:32 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm & copy);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
		void	execute(Bureaucrat const & executor) const;
};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs);

#endif