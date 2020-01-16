/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:27:26 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 14:52:03 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"
#include <iostream>

Integer::Integer(int const n) : _n(n) {
    std::cout << "Constructor called with value " << n << std::endl;
}

Integer::~Integer(void) {
    std::cout << "Destructor called with value" << this->_n << std::endl;
}

int         Integer::getValue(void) const {
    return this->_n;
}

Integer &   Integer::operator-(Integer const & rhs) {
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();
    return *this;
}

Integer     Integer::operator+(Integer const & rhs) const {
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;

    return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs) {
    o << rhs.getValue();
    return o;
}
