/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:29:42 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 15:45:11 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int         Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

Fixed &     Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
        this->_n = rhs.getRawBits();

    return *this;
}

