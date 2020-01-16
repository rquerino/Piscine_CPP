/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:15:39 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:54:27 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& wp) : _name(name), _weapon(wp) {
    return;
}

HumanA::~HumanA(void) {
    return;
}

void        HumanA::setName(std::string x) {
    this->_name = x;
}

std::string HumanA::getName(void) {
    return this->_name;
}

void    HumanA::attack(void) {
    std::cout << this->getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}