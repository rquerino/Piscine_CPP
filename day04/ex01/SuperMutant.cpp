/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:22:21 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 15:27:37 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy) {
    *this = copy;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh ..." << std::endl;
}

// Operator
SuperMutant &     SuperMutant::operator=(SuperMutant const & rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    
    return *this;
}

// Others
// Overloads to take 3 less damage than normal
void SuperMutant::takeDamage(int d) {
    if (d > 0)
        this->_hp -= (d - 3);
}
