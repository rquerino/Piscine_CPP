/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:17:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 14:43:43 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>

class Integer {

public:
    Integer(int const n);
    ~Integer(void);

    int         getValue(void) const;

    Integer &   operator-(Integer const & rhs);
    Integer     operator+(Integer const & rhs) const;

private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif