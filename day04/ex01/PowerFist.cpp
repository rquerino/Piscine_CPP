/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:34:26 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 14:57:51 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const & copy) {
    *this = copy;
}

PowerFist::~PowerFist(void) {}

// Operator
PowerFist &  PowerFist::operator=(PowerFist const & rhs) {
    this->_name = rhs._name;
    this->_damage = rhs._damage;
    this->_apCost = rhs._apCost;

    return *this;
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}