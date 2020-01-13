/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:36:28 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 12:42:09 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
    std::cout << "Constructor called" << std::endl;

    this->setFoo(0);
    std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

    return;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo(void) const {
    return this->_foo;
}

void    Sample::setFoo(int v) {
    if (v >= 0)
        this->_foo = v;

    return;
}