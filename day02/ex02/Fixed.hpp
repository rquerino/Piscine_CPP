/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:28:06 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 18:51:43 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    public:
        // Constructors
        Fixed(void);
        Fixed(int const n);
        Fixed(float const z);
        Fixed(Fixed const & src);
        //Destructor
        ~Fixed(void);

        int                     getRawBits( void ) const;
        // Copy
        Fixed &                 operator=(Fixed const & rhs);
        // Pre-increment/Post-increment/Pre-decrement/Post-decrement
        Fixed &                 operator++(void);
        Fixed                   operator++(int);
        Fixed &                 operator--(void);
        Fixed                   operator--(int);


        // Comparison operators
        bool                    operator==(Fixed const & rhs) const;
        bool                    operator>(Fixed const & rhs) const;
        bool                    operator>=(Fixed const & rhs) const;
        bool                    operator<(Fixed const & rhs) const;
        bool                    operator<=(Fixed const & rhs) const;
        bool                    operator!=(Fixed const & rhs) const;

        // Arithmetic operators
        Fixed                   operator-(Fixed const & rhs) const;
        Fixed                   operator+(Fixed const & rhs) const;
        Fixed                   operator*(Fixed const & rhs) const;
        Fixed                   operator/(Fixed const & rhs) const;

        float                   toFloat(void) const;
        int                     toInt(void) const;

        static Fixed &          min(Fixed &a, Fixed &b);
        const static Fixed &    min(const Fixed &a, const Fixed &b);
        static Fixed &          max(Fixed &a, Fixed &b);
        const static Fixed &    max(const Fixed &a, const Fixed &b);

    private:
        int                     _n;
        static const int        _f = 8;
};

std::ostream &                  operator<<(std::ostream & o, Fixed const & i);

#endif