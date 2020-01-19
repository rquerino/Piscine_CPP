/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:21:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 14:47:43 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(AWeapon const & copy) {
    *this = copy;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    this->_name = name;
    this->_damage = damage;
    this->_apCost = apcost;
}

AWeapon::~AWeapon(void) {}

// Operator
AWeapon &  AWeapon::operator=(AWeapon const & rhs) {
    this->_name = rhs._name;
    this->_damage = rhs._damage;
    this->_apCost = rhs._apCost;

    return *this;
}

// Getters
std::string AWeapon::getName(void) const {
    return this->_name;
}

int         AWeapon::getDamage(void) const {
    return this->_damage;
}

int         AWeapon::getApCost(void) const {
    return this->_apCost;
}

// Setters
void AWeapon::setName(std::string n) {
    this->_name = n;
}

void AWeapon::setDamage(int d) {
    this->_damage = d;
}

void AWeapon::setApCost(int a) {
    this->_apCost = a;
}