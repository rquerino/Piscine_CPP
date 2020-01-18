/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 11:56:05 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 13:05:27 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

// Constructors
Peon::Peon(void) {
    this->_name = "Peoneer";
}

Peon::Peon(const Peon & copy) {
    *this = copy;
}

Peon::Peon(std::string n) : _name(n) {
    std::cout << "Zog zog." << std::endl;
}

// Destructors
Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

// Operators
Peon &  Peon::operator=(Peon const & rhs) {
    this->_name = rhs._name;

    return *this;
}

// Others
void        Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}