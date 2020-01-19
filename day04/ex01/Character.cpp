/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:33:59 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:31:22 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) {}

Character::Character(Character const & copy) {
    *this = copy;
}

Character::Character(std::string const & name) {
    this->_name = name;
    this->_ap = 40;
    this->_wp = NULL;
}

Character::~Character(void) {}

// Operator
Character &     Character::operator=(Character const & rhs) {
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_wp = rhs._wp;
    
    return *this;
}

// Getters
std::string Character::getName() const {
    return this->_name;
}

int         Character::getAP() const {
    return this->_ap;
}

AWeapon*    Character::getWeapon() const {
    return this->_wp;
}

// Setters
void Character::recoverAP() {
    int newAP = this->_ap + 10;
    if (newAP > 40)
        this->_ap = 40;
    else
        this->_ap = newAP;
}

void Character::equip(AWeapon* wp) {
    this->_wp = wp;
}

// Others
void Character::attack(Enemy* target) {
    if (this->_wp != NULL && (this->_ap >= this->_wp->getApCost())) {
        std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_wp->getName() << std::endl;
        // Subtract AP
        this->_ap -= this->_wp->getApCost();
        // Weapon attack display
        this->_wp->attack();
        // Apply damage to enemy
        target->takeDamage(this->_wp->getDamage());
        // Delete target if it has no more hp
        if (target->getHP() <= 0)
            delete target;
    }
}

// Overload operator <<
std::ostream &  operator<< (std::ostream & o, const Character & rhs) {
    if (rhs.getWeapon() != NULL) {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    } else {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    }

    return o;
}