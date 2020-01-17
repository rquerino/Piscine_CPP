/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:29:42 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 16:39:14 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

// CONVERTING! https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/


Fixed::Fixed(void) : _n(0) {
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    std::cout << "Int Constructor called" << std::endl;
    this->_n = n << _f;
}

Fixed::Fixed(float const z) {
    std::cout << "Float Constructor called" << std::endl;
    this->_n = roundf(z * (1 << _f));
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int         Fixed::getRawBits( void ) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

float       Fixed::toFloat(void) const {
    return ((float)(this->_n) / (1 << _f));
}

int         Fixed::toInt(void) const {
    return ((int)(this->_n >> _f));
}

Fixed &     Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
        this->_n = rhs.getRawBits();

    return *this;
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}