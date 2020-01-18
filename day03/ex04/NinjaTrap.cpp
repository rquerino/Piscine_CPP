/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:31:40 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:35:30 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void) {
    std::cout << "I'm a robot ninja... <NinjaTrap Constructor called>" << std::endl;
    this->_name = "Daddy";
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    this->_ninjaAttackDamage = 40;
}

NinjaTrap::NinjaTrap(std::string name) {
    std::cout << "I'm a robot ninja... <Constructor called for " << name << ">" << std::endl;
    this->_name = name;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    this->_ninjaAttackDamage = 40;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Ooh yeah, watch me! Watch me go! <Destructor called for ";
    std::cout << this->_name << ">" << std::endl;
}

// Operator
NinjaTrap &      NinjaTrap::operator=(NinjaTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
    this->_ninjaAttackDamage = rhs._ninjaAttackDamage;
    
    return *this;
}

// Attacks
void            NinjaTrap::rangedAttack(std::string const & target) {
    std::cout << "Take two bullets, then call me in the morning. <" << this->_name << "> attacks <" << target;
    std::cout << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            NinjaTrap::meleeAttack(std::string const & target) {
    std::cout << "Dance battle! Or, you know... regular battle. <" << this->_name << "> attacks <" << target;
    std::cout << "> with a melee attack, causing <" << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

// Random attack
void            NinjaTrap::ninjaShoebox(ClapTrap& target) {
    std::cout << "Nurse Clap is here! <" << this->_name << "> ninja attacks <";
    std::cout << target.getName() << "> dealing <" << this->_ninjaAttackDamage <<  "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_ninjaAttackDamage;
}

void            NinjaTrap::ninjaShoebox(ScavTrap& target) {
    std::cout << "scAVENGERS: ENDGAME!! <" << this->_name << "> ninja attacks <";
    std::cout << target.getName() << "> dealing <" << this->_ninjaAttackDamage <<  "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_ninjaAttackDamage;
}

void            NinjaTrap::ninjaShoebox(FragTrap& target) {
    std::cout << "DeFRAGmenting! <" << this->_name << "> ninja attacks <";
    std::cout << target.getName() << "> dealing <" << this->_ninjaAttackDamage <<  "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_ninjaAttackDamage;
}

void            NinjaTrap::ninjaShoebox(NinjaTrap& target) {
    std::cout << "Watch out robot ninja! <" << this->_name << "> ninja attacks <";
    std::cout << target.getName() << "> dealing <" << this->_ninjaAttackDamage <<  "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_ninjaAttackDamage;
}

// Getters
unsigned int    NinjaTrap::getNinjaAttackDamage(void) {
    return this->_ninjaAttackDamage;
}
