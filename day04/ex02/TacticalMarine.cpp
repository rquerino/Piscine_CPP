/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:20:44 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 20:57:24 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
    *this = copy;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ..." << std::endl;
}

// Operator
TacticalMarine &    TacticalMarine::operator=(TacticalMarine const & rhs) {
    (void)rhs; // rhs was unused
    return *this;
}


TacticalMarine*     TacticalMarine::clone() const {
    return new TacticalMarine; // *pointer use new
}

void                TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void                TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}
