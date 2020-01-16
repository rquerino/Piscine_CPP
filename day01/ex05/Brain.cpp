/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:29:00 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:06:50 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {
    // string buffer
    std::stringstream   x;
    x << this; // add THIS to the stringstream object.
    this->_hex = x.str(); // to get and set string object whose content is present in stream.
    return;
}

Brain::~Brain(void) {
    return;
}

void        Brain::setIq(int x) {
    this->_iq = x;
}

void        Brain::setAge(int x) {
    this->_age = x;
}

int         Brain::getIq(void) {
    return this->_iq;
}

int         Brain::getAge(void) {
    return this->_age;
}

std::string Brain::identify(void) {
    return this->_hex;
}