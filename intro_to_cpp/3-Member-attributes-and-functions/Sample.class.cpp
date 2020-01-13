/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:36:24 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 10:44:30 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
    std::cout << "Constructor called" << std::endl;

    // This is a pointer to the variable
    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;

    // It's possible to call a function through a pointer in C++
    this->bar();

    return;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar(void) {
    std::cout << "Member function bar called" << std::endl;
    return;
}