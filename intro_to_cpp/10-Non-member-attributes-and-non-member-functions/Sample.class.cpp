/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:12:28 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 14:29:44 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;

    return;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    Sample::_nbInst -= 1;

    return;
}

int Sample::getNbInst(void) {
    return Sample::_nbInst;
}

// It's the only way to initiate a static variable
int Sample::_nbInst = 0;