/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 00:00:41 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 00:21:25 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

// Constructors
Victim::Victim(void) {}

Victim::Victim(const Victim & copy) {
    *this = copy;
}

Victim::Victim(std::string n) : _name(n) {
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

// Destructors
Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

// Operators
Victim &  Victim::operator=(Victim const & rhs) {
    this->_name = rhs._name;

    return *this;
}

// overload of the << to ostream operator (without friend)
std::ostream &  operator<< (std::ostream & o, const Victim & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;

    return o;
}

// Getters
std::string Victim::getName(void) {
    return this->_name;
}

// Setters
void        Victim::setName(std::string n) {
    this->_name = n;
}

// Others
void        Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

