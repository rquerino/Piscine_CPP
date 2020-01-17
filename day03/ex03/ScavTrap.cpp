/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:33:47 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 14:23:50 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "Look out, everybody, things are about to get awesome! <Constructor called for " << name << ">" << std::endl;
    this->_name = name;
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
    std::cout << "Hey everybody! Check out my package! <Destructor called for ";
    std::cout << this->_name << ">" << std::endl;
}

// Attacks
void            ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "I am a tornado of death and bullets! <" << this->_name << "> attacks <" << target;
    std::cout << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "Heyyah! <" << this->_name << "> attacks <" << target << "> with a melee attack, causing <";
    std::cout << this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void            ScavTrap::russianRoulette(std::string const & target) {
    std::cout << "That looks like it hurts! <" << this->_name << "> challenges <" << target;
    std::cout << "> to a russian roulette with a rocket launcher, causing <" << this->_russianRouletteDamage;
    std::cout << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_russianRouletteDamage;
}

void            ScavTrap::thumbWar(std::string const & target) {
    std::cout << "Woah! Oh! Jeez! <" << this->_name << "> challenges <" << target << "> with a thumb war, causing <";
    std::cout << this->_thumbWarDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_thumbWarDamage;
}

void            ScavTrap::swallowGranade(std::string const & target) {
    std::cout << "It's like a box of chocolates... <" << this->_name << "> challenges <" << target;
    std::cout << "> to swallow a granade, causing <" << this->_swallowGranadeDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_swallowGranadeDamage;
}

void            ScavTrap::telescopeTheSun(std::string const & target) {
    std::cout << "Burn them, my mini-phoenix! <" << this->_name << "> challenges <" << target;
    std::cout << "> to look at the sun through a telescope, causing <" << this->_telescopeTheSunDamage;
    std::cout << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_telescopeTheSunDamage;
}

void            ScavTrap::skydive(std::string const & target) {
    std::cout << "Disgusting. I love it! <" << this->_name << "> challenges <" << target;
    std::cout << "> to skydiving without a parachute, causing <" << this->_skydiveDamage << "> points of damage !" << std::endl;
    this->_randomAttackDamage = this->_skydiveDamage;
}

// Random attack
void            ScavTrap::challengeNewcomer(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "Who needs ammo anyway, am I right? <" << this->_name;
        std::cout << "> doesn't have enough energy to challenge <" << target << ">." << std::endl;
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

// Getters
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