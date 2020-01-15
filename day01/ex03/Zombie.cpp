/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 04:47:08 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:57:35 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    return;
}

Zombie::~Zombie(void) {
    return;
}

void    Zombie::announce(void) {
    std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiinnnnssss..." << std::endl;
}

void    Zombie::setName(std::string x) {
    this->_name = x;
}

void    Zombie::setType(std::string x) {
    this->_type = x;
}

std::string Zombie::getName(void) {
    return this->_name;
}

std::string Zombie::getType(void) {
    return this->_type;
}