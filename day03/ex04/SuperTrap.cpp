/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:29:14 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:24:54 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {}
SuperTrap::SuperTrap(std::string name) {
    std::cout << "AAAAAAAAAAND OPEN! *access denied* <Constructor called for " << name << ">" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

SuperTrap::~SuperTrap() {
    std::cout << "Don't worry, baby! It happens to a lot of girls! <Destructor called for " << this->_name;
    std::cout << ">" << std::endl;
}

// Operator
SuperTrap &     SuperTrap::operator=(SuperTrap const & rhs) {
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

void            SuperTrap::meleeAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}

void            SuperTrap::rangedAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}