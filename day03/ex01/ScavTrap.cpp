/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:33:47 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 12:10:16 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : _name(name) {
    std::cout << "Look out, everybody, things are about to get awesome! <Constructor called for " << name << ">" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    this->_russianRouletteDamage = 50;
    this->_thumbWarDamage = 10;
    this->_swallowGranadeDamage = 90;
    this->_telescopeTheSunDamage = 40;
    this->_skydiveDamage = 60;
}

ScavTrap::~ScavTrap() {
    std::cout << "Hey everybody! Check out my package! <Destructor called for " << this->_name << ">" << std::endl;
}

// Attacks
void            ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "I am a tornado of death and bullets! <" << this->_name << "> attacks <" << target << "> at range, causing <";
    std::cout << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "Heyyah! <" << this->_name << "> attacks <" << target << "> with a melee attack, causing <";
    std::cout << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void            ScavTrap::russianRoulette(std::string const & target) {
    std::cout << "That looks like it hurts! <" << this->_name << "> challenges <" << target << "> to a russian roulette with a rocket launcher, causing <";
    std::cout << this->_russianRouletteDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_russianRouletteDamage;
}

void            ScavTrap::thumbWar(std::string const & target) {
    std::cout << "Woah! Oh! Jeez! <" << this->_name << "> challenges <" << target << "> with a thumb war, causing <";
    std::cout << this->_thumbWarDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_thumbWarDamage;
}

void            ScavTrap::swallowGranade(std::string const & target) {
    std::cout << "It's like a box of chocolates... <" << this->_name << "> challenges <" << target << "> to swallow a granade, causing <";
    std::cout << this->_swallowGranadeDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_swallowGranadeDamage;
}

void            ScavTrap::telescopeTheSun(std::string const & target) {
    std::cout << "Burn them, my mini-phoenix! <" << this->_name << "> challenges <" << target << "> to look at the sun through a telescope, causing <";
    std::cout << this->_telescopeTheSunDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_telescopeTheSunDamage;
}

void            ScavTrap::skydive(std::string const & target) {
    std::cout << "Disgusting. I love it! <" << this->_name << "> challenges <" << target << "> to skydiving without a parachute, causing <";
    std::cout << this->_skydiveDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_skydiveDamage;
}

// Random attack
void            ScavTrap::challengeNewcomer(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "Who needs ammo anyway, am I right? <" << this->_name << "> doesn't have enough energy to challenge <";
        std::cout << target << ">." << std::endl;
    } else {
        this->_energyPoints -= 25;
        srand(time(NULL));
        int r = rand() % 5;
        if (r == 0)
            this->russianRoulette(target);
        else if (r == 1)
            this->thumbWar(target);
        else if (r == 2)
            this->swallowGranade(target);
        else if (r == 3)
            this->telescopeTheSun(target);
        else if (r == 4)
            this->skydive(target);
    }
}

// Life gain/loss related
void            ScavTrap::takeDamage(unsigned int amount) {
    unsigned int    realDamage = amount - this->_armorDamageReduction;

    if (this->_hitPoints - realDamage < 0) {
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

void            ScavTrap::beRepaired(unsigned int amount) {
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

// Getters
unsigned int    ScavTrap::getHitPoints(void) {
    return this->_hitPoints;
}

unsigned int    ScavTrap::getMaxHitPoints(void) {
    return this->_maxHitPoints;
}

unsigned int    ScavTrap::getEnergyPoints(void) {
    return this->_energyPoints;
}

unsigned int    ScavTrap::getMaxEnergyPoints(void) {
    return this->_maxEnergyPoints;
}

unsigned int    ScavTrap::getLevel(void) {
    return this->_level;
}

std::string     ScavTrap::getName(void) {
    return this->_name;
}

unsigned int    ScavTrap::getMeleeAttackDamage(void) {
    return this->_meleeAttackDamage;
}

unsigned int    ScavTrap::getRangedAttackDamage(void) {
    return this->_rangedAttackDamage;
}

unsigned int    ScavTrap::getArmorDamageReduction(void) {
    return this->_armorDamageReduction;
}
unsigned int    ScavTrap::getRussianRouletteDamage(void) {
    return this->_russianRouletteDamage;
}

unsigned int    ScavTrap::getThumbWarDamage(void) {
    return this->_thumbWarDamage;
}

unsigned int    ScavTrap::getSwallowGranadeDamage(void) {
    return this->_swallowGranadeDamage;
}

unsigned int    ScavTrap::getTelescopeTheSunDamage(void) {
    return this->_telescopeTheSunDamage;
}

unsigned int    ScavTrap::getSkydiveDamage(void) {
    return this->_skydiveDamage;
}

unsigned int    ScavTrap::getRandomAttackDamage(void) {
    return this->_randomAttackDamage;
}