/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:10:35 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 17:07:08 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0) {
    std::cout << "Default Constructor called" << std::endl;
}

Sample::Sample(int const n) : _foo(n) {
    std::cout << "Parametric Constructor called" << std::endl;
}

Sample::Sample(Sample const & src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
}

Sample &        Sample::operator=(Sample const & rhs) {
    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
        this->_foo = rhs.getFoo();

    return *this;
}

int             Sample::getFoo(void) const {
    return this->_foo;
}

std::ostream &  operator<<(std::ostream & o, Sample const & i) {
    o << "The value of _foo is: " << i.getFoo();
    return o;
}

