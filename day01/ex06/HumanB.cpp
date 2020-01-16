/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:19:59 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:57:09 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
    return;
}

HumanB::~HumanB(void) {
    return;
}

void        HumanB::setName(std::string x) {
    this->_name = x;
}

std::string HumanB::getName(void) {
    return this->_name;
}

void        HumanB::setWeapon(Weapon& wp) {
    this->_weapon = &wp; // pointer to address
}


void    HumanB::attack(void) {
    // _weapon-> instead of _weapon. because it's a pointer
    std::cout << this->getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}