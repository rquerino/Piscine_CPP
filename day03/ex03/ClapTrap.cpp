/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:15:17 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:53:45 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {
    std::cout << "I'm a sexy dinosaur! Rawr! <Daddy Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
    std::cout << "I'm a sexy dinosaur! Rawr! <Daddy Constructor called for " << name << ">" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

ClapTrap::~ClapTrap() {
    std::cout << "I AM ON FIRE!!! OH GOD, PUT ME OUT!!! <Daddy Destructor called>" << std::endl;
}

// Operator
ClapTrap &      ClapTrap::operator=(ClapTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
    
    return *this;
}

// Attacks
void            ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "Ha ha ha! Fall before your robot overlord! <" << this->_name << "> attacks <" << target;
    std::cout << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "This is why I was built! <" << this->_name << "> attacks <" << target;
    std::cout << "> with a melee attack, causing <" << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

// Life gain/loss related
void            ClapTrap::takeDamage(unsigned int amount) {
    int    realDamage = amount - this->_armorDamageReduction;

    if ((int) this->_hitPoints - realDamage < 0) {
        this->_hitPoints = 0;
        std::cout << "Save me from the Badass! <" << this->_name << "> was hit and received <";
        std::cout << amount - this->_armorDamageReduction << "> points of damage, dying." << std::endl;
    }
    else {
        this->_hitPoints -= realDamage;
        std::cout << "Flesh fireworks! <" << this->_name << "> was hit and received <";
        std::cout << amount - this->_armorDamageReduction << "> points of damage." << std::endl;
    }
}

void            ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + amount > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
    
    if (this->_energyPoints + amount > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    else
        this->_energyPoints += amount;
    
    std::cout << "Sweet life juice! <" << this->_name << "> restored <";
    std::cout << amount << "> hit points and energy." << std::endl;
}

// Setters
void            ClapTrap::setLevel(unsigned int l) {
    this->_level = l;
}

// Getters
unsigned int    ClapTrap::getHitPoints(void) {
    return this->_hitPoints;
}

unsigned int    ClapTrap::getMaxHitPoints(void) {
    return this->_maxHitPoints;
}

unsigned int    ClapTrap::getEnergyPoints(void) {
    return this->_energyPoints;
}

unsigned int    ClapTrap::getMaxEnergyPoints(void) {
    return this->_maxEnergyPoints;
}

unsigned int    ClapTrap::getLevel(void) {
    return this->_level;
}

std::string     ClapTrap::getName(void) {
    return this->_name;
}

unsigned int    ClapTrap::getMeleeAttackDamage(void) {
    return this->_meleeAttackDamage;
}

unsigned int    ClapTrap::getRangedAttackDamage(void) {
    return this->_rangedAttackDamage;
}

unsigned int    ClapTrap::getArmorDamageReduction(void) {
    return this->_armorDamageReduction;
}

unsigned int    ClapTrap::getRandomAttackDamage(void) {
    return this->_randomAttackDamage;
}