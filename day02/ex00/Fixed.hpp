/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:28:06 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 15:43:37 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);

        int getRawBits( void ) const;
        Fixed &    operator=(Fixed const & rhs);

    private:
        int _n;
        static const int    _f = 8;
};

#endif