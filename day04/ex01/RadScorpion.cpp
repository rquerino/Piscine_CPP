/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:31:53 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:19:53 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy) {
    *this = copy;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
}

// Operator
RadScorpion &     RadScorpion::operator=(RadScorpion const & rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    
    return *this;
}

// Others
void RadScorpion::takeDamage(int d) {
    if (d > 0) {
        int newHP = this->_hp - d;
        if (newHP < 0)
            this->_hp = 0;
        else
            this->_hp = newHP;
    }
}
