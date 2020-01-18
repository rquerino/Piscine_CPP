/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:18 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:09:16 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string name) {
    std::cout << "AAAAAAAAAAND OPEN! *access denied* <Constructor called for " << name << ">" << std::endl;
    this->_name = name;
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
    std::cout << "Don't worry, baby! It happens to a lot of girls! <Destructor called for " << this->_name;
    std::cout << ">" << std::endl;
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
    this->_criticalAttackDamage = rhs._criticalAttackDamage;
    this->_incendiaryAttackDamage = rhs._incendiaryAttackDamage;
    this->_corrosiveAttackDamage = rhs._corrosiveAttackDamage;
    this->_shockAttackDamage = rhs._shockAttackDamage;
    this->_explosiveAttackDamage = rhs._explosiveAttackDamage;
    
    return *this;
}

// Attacks
void            FragTrap::rangedAttack(std::string const & target) {
    std::cout << "WOW! I hit 'em! <" << this->_name << "> attacks <" << target << "> at range, causing <";
    std::cout << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            FragTrap::meleeAttack(std::string const & target) {
    std::cout << "Not so tough after all! <" << this->_name << "> attacks <" << target;
    std::cout << "> with a melee attack, causing <" << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void            FragTrap::criticalAttack(std::string const & target) {
    std::cout << "Ha ha ha! Suck it! <" << this->_name << "> attacks <" << target;
    std::cout << "> with a CRITICAL HIT, causing <" << this->_criticalAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_criticalAttackDamage;
}

void            FragTrap::incendiaryAttack(std::string const & target) {
    std::cout << "Eww! Cool. <" << this->_name << "> attacks <" << target << "> with an incendiary attack, causing <";
    std::cout << this->_incendiaryAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_incendiaryAttackDamage;
}

void            FragTrap::corrosiveAttack(std::string const & target) {
    std::cout << "Yikes! Ohhoho! <" << this->_name << "> attacks <" << target << "> with a corrosive attack, causing <";
    std::cout << this->_corrosiveAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_corrosiveAttackDamage;
}

void            FragTrap::shockAttack(std::string const & target) {
    std::cout << "Wait, did I really do that? <" << this->_name << "> attacks <" << target;
    std::cout << "> with a shock attack, causing <" << this->_shockAttackDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_shockAttackDamage;
}

void            FragTrap::explosiveAttack(std::string const & target) {
    std::cout << "Present for you! <" << this->_name << "> attacks <" << target;
    std::cout << "> with an explosive attack, causing <" << this->_explosiveAttackDamage << "> points of damage !" << std::endl;
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

// Getters
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