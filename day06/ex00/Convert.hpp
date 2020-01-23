/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:52:41 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/22 13:17:35 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert {

    private:
        std::string _str;

    public:
        // Constructors
        Convert(void);
        Convert(Convert & copy);
        Convert(std::string str);

        // Destructor
        ~Convert();

        // Operator
        Convert &    operator=(Convert const & rhs);

        // Others
        operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;

        // Exception
        class ErrorConvertingException : public std::exception
        {
            public:
                ErrorConvertingException(void);
                ErrorConvertingException(ErrorConvertingException const & copy);

                virtual ~ErrorConvertingException(void) throw();

                ErrorConvertingException&   operator=(ErrorConvertingException const  & rhs);

                virtual const char*     what() const throw();
        };
};

#endif