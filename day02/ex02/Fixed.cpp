/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:29:42 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 19:23:07 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

// Constructors
// In the PDF the constructors/Destructors don't output anything
Fixed::Fixed(void) : _n(0) {
    // std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    // std::cout << "Int Constructor called" << std::endl;
    this->_n = n << _f;
}

Fixed::Fixed(float const z) {
    // std::cout << "Float Constructor called" << std::endl;
    this->_n = roundf(z * (1 << _f));
}

Fixed::Fixed(Fixed const & src) {
    // std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

// Destructor
Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

// Member functions
int         Fixed::getRawBits( void ) const {
    return this->_n;
}

void        Fixed::setRawBits(int const raw) {
    this->_n = raw;
}

float       Fixed::toFloat(void) const {
    return ((float)(this->_n) / (1 << _f));
}

int         Fixed::toInt(void) const {
    return ((int)(this->_n >> _f));
}

// Copy
Fixed &     Fixed::operator=(Fixed const & rhs) {
    // std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
        this->_n = rhs.getRawBits();

    return *this;
}

// Pre-increment/Post-increment/Pre-decrement/Post-decrement
// https://en.cppreference.com/w/cpp/language/operator_incdec
// https://www.embedded.com/pre-increment-or-post-increment-in-c-c/
// Pre-increment: T& T::operator++()
Fixed &     Fixed::operator++(void) {
    this->_n += 1;
    return *this;
}
// Post-increment: T T::operator++(int)
// The int parameter is a dummy parameter used to differentiate between prefix and postfix
// versions of the operators.
Fixed       Fixed::operator++(int) {
    Fixed temp = *this;
    ++*this;
    return temp;
}
// Pre-decrement: T& T::operator--()
Fixed &     Fixed::operator--(void) {
    this->_n -= 1;
    return *this;
}
// Post-decrement: T T::operator--(int)
Fixed       Fixed::operator--(int) {
    Fixed temp = *this;
    --*this;
    return temp;
}

// Comparison operators
bool        Fixed::operator==(Fixed const & rhs) const {
    return (this->_n == rhs._n);
}

bool        Fixed::operator>(Fixed const & rhs) const {
    return (this->_n > rhs._n);
}

bool        Fixed::operator>=(Fixed const & rhs) const {
    return (this->_n >= rhs._n);
}

bool        Fixed::operator<(Fixed const & rhs) const {
    return (this->_n < rhs._n);
}

bool        Fixed::operator<=(Fixed const & rhs) const {
    return (this->_n <= rhs._n);
}

bool        Fixed::operator!=(Fixed const & rhs) const {
    return (this->_n != rhs._n);
}

// Arithmetic operators
Fixed       Fixed::operator-(Fixed const & rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed       Fixed::operator+(Fixed const & rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed       Fixed::operator*(Fixed const & rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed       Fixed::operator/(Fixed const & rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}


// Non member public functions

std::ostream &  operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}

// min that takes references on two fixed point values and returns a reference to the smallest value
Fixed &         Fixed::min(Fixed & x, Fixed & y)
{
    if (x < y)
        return x;
    else
        return y;
}
// an overload that takes references on two constant fixed point values and returns a reference to the smallest constant value.
const Fixed &   Fixed::min(const Fixed & x, const Fixed & y)
{
    if (x < y)
        return x;
    else
        return y;
}
// max that takes references on two fixed point values and returns a reference to the biggest value
Fixed &         Fixed::max(Fixed & x, Fixed & y)
{
    if (x > y)
        return x;
    else
        return y;
}
// an overload that takes references on two constant fixed point values and returns a reference to the biggest constant value.
const Fixed &   Fixed::max(const Fixed & x, const Fixed & y)
{
    if (x > y)
        return x;
    else
        return y;
}