/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:18 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:49:28 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string name) : _name(name) {
    std::cout << "AAAAAAAAAAND OPEN! *access denied* <Constructor called for " << name << ">" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_criticalAttackDamage = 90;
    this->_incendiaryAttackDamage = 35;
    this->_corrosiveAttackDamage = 45;
    this->_shockAttackDamage = 40;
    this->_explosiveAttackDamage = 50;
}

FragTrap::~FragTrap() {
    std::cout << "Don't worry, baby! It happens to a lot of girls! <Destructor called for " << this->_name << ">" << std::endl;
}

// Operator
FragTrap &      FragTrap::operator=(FragTrap const & rhs) {
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
void            FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <";
    std::cout << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with a melee attack, causing <";
    std::cout << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void            FragTrap::criticalAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with a CRITICAL HIT, causing <";
    std::cout << this->_criticalAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_criticalAttackDamage;
}

void            FragTrap::incendiaryAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with an incendiary attack, causing <";
    std::cout << this->_incendiaryAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_incendiaryAttackDamage;
}

void            FragTrap::corrosiveAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with a corrosive attack, causing <";
    std::cout << this->_corrosiveAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_corrosiveAttackDamage;
}

void            FragTrap::shockAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with a shock attack, causing <";
    std::cout << this->_shockAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_shockAttackDamage;
}

void            FragTrap::explosiveAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> with an explosive attack, causing <";
    std::cout << this->_explosiveAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_explosiveAttackDamage;
}

// Random attack
void            FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "STAIRS!? NOOOOOOOOOOOOO! <" << this->_name << "> doesn't have enough energy to attack <";
        std::cout << target << ">." << std::endl;
    } else {
        this->_energyPoints -= 25;
        srand(time(NULL));
        int r = rand() % 5;
        if (r == 0)
            this->criticalAttack(target);
        else if (r == 1)
            this->incendiaryAttack(target);
        else if (r == 2)
            this->corrosiveAttack(target);
        else if (r == 3)
            this->shockAttack(target);
        else if (r == 4)
            this->explosiveAttack(target);
    }
}

// Life gain/loss related
void            FragTrap::takeDamage(unsigned int amount) {
    int    realDamage = amount - this->_armorDamageReduction;

    if ((int) this->_hitPoints - realDamage < 0) {
        this->_hitPoints = 0;
        std::cout << "AAAAAAARGH!! <" << this->_name << "> was hit and received <";
        std::cout << amount - this->_armorDamageReduction << "> points of damage, dying." << std::endl;
    }
    else {
        this->_hitPoints -= realDamage;
        std::cout << "They're coming out of the wall sphincters!! <" << this->_name << "> was hit and received <";
        std::cout << amount - this->_armorDamageReduction << "> points of damage." << std::endl;
    }
}

void            FragTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + amount > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints += amount;
    
    if (this->_energyPoints + amount > this->_maxEnergyPoints)
        this->_energyPoints = this->_maxEnergyPoints;
    else
        this->_energyPoints += amount;
    
    std::cout << "His long list of weaknesses ...and pet allergens. <" << this->_name << "> restored <";
    std::cout << amount << "> hit points and energy." << std::endl;
}

// Getters
unsigned int    FragTrap::getHitPoints(void) {
    return this->_hitPoints;
}

unsigned int    FragTrap::getMaxHitPoints(void) {
    return this->_maxHitPoints;
}

unsigned int    FragTrap::getEnergyPoints(void) {
    return this->_energyPoints;
}

unsigned int    FragTrap::getMaxEnergyPoints(void) {
    return this->_maxEnergyPoints;
}

unsigned int    FragTrap::getLevel(void) {
    return this->_level;
}

std::string     FragTrap::getName(void) {
    return this->_name;
}

unsigned int    FragTrap::getMeleeAttackDamage(void) {
    return this->_meleeAttackDamage;
}

unsigned int    FragTrap::getRangedAttackDamage(void) {
    return this->_rangedAttackDamage;
}

unsigned int    FragTrap::getArmorDamageReduction(void) {
    return this->_armorDamageReduction;
}
unsigned int    FragTrap::getCriticalAttackDamage(void) {
    return this->_criticalAttackDamage;
}

unsigned int    FragTrap::getIncendiaryAttackDamage(void) {
    return this->_incendiaryAttackDamage;
}

unsigned int    FragTrap::getCorrosiveAttackDamage(void) {
    return this->_corrosiveAttackDamage;
}

unsigned int    FragTrap::getShockAttackDamage(void) {
    return this->_shockAttackDamage;
}

unsigned int    FragTrap::getExplosiveAttackDamage(void) {
    return this->_explosiveAttackDamage;
}

unsigned int    FragTrap::getRandomAttackDamage(void) {
    return this->_randomAttackDamage;
}