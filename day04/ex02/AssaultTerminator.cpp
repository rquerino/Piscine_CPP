/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:37:11 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 17:43:25 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy) {
    std::cout << "* teleports from space *" << std::endl;
    *this = copy;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "I’ll be back ..." << std::endl;
}

// Operator
AssaultTerminator &    AssaultTerminator::operator=(AssaultTerminator const & rhs) {
    return *this;
}


AssaultTerminator*     AssaultTerminator::clone() const {
    return new AssaultTerminator; // *pointer use new
}

void                AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void                AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
