/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:17:31 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:26:13 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
    std::cout << "Pony " << _name << " is born" << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Pony " << _name << " died" << std::endl;
    return;
}

void        Pony::setName(std::string x) {
    Pony::_name = x;
}

void        Pony::setColor(std::string x) {
    Pony::_color = x;
}

std::string Pony::getName(void) {
    return this->_name;
}

std::string Pony::getColor(void) {
    return this->_color;
}