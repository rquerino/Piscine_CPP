/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:11:19 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:24:22 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
    return;
}

Weapon::Weapon(std::string x) : _type(x) {
    return;
}

Weapon::~Weapon(void) {
    return;
}

void        Weapon::setType(std::string x) {
    this->_type = x;
}

std::string Weapon::getType(void) {
    return this->_type;
}
