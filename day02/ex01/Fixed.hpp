/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:28:06 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 16:18:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const z);
        Fixed(Fixed const & src);
        ~Fixed(void);

        int         getRawBits( void ) const;
        Fixed &     operator=(Fixed const & rhs);
        float       toFloat(void) const;
        int         toInt(void) const;

    private:
        int                 _n;
        static const int    _f = 8;
};

std::ostream &      operator<<(std::ostream & o, Fixed const & i);

#endif