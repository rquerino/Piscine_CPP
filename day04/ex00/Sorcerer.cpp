/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:46:19 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 13:09:32 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

// Constructors
Sorcerer::Sorcerer(void) {
    this->_name = "Gandalf";
    this->_title = "The Grey";
}

Sorcerer::Sorcerer(const Sorcerer & copy) {
    *this = copy;
}

Sorcerer::Sorcerer(std::string n, std::string t) : _name(n), _title(t) {
    std::cout << this->_name <<", " << this->_title << ", is born !" << std::endl;
}

// Destructors
Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

// Operators
Sorcerer &  Sorcerer::operator=(Sorcerer const & rhs) {
    this->_name = rhs._name;
    this->_title = rhs._title;

    return *this;
}

// Overload of the << to ostream operator (without friend)
std::ostream &  operator<< (std::ostream & o, const Sorcerer & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;

    return o;
}

// Getters
// Added const at the end because the overload operator<< wasn't getting the name (?)
std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}

// Setters
void        Sorcerer::setName(std::string n) {
    this->_name = n;
}

void        Sorcerer::setTitle(std::string t) {
    this->_title = t;
}

// Others
void        Sorcerer::polymorph(Victim const & v) const {
    return v.getPolymorphed();
}
