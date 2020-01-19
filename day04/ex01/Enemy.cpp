/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:04:29 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:08:44 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(void) {}

Enemy::Enemy(Enemy const & copy) {
    *this = copy;
}

Enemy::Enemy(int hp, std::string const & type) {
    this->_hp = hp;
    this->_type = type;
}

Enemy::~Enemy(void) {}


// Operator
Enemy &     Enemy::operator=(Enemy const & rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    
    return *this;
}

// Getters
int         Enemy::getHP() const {
    return this->_hp;
}

std::string Enemy::getType(void) const {
    return this->_type;
}

// Setters
void        Enemy::setHP(int hp) {
    this->_hp = hp;
}

void        Enemy::setType(std::string type) {
    this->_type = type;
}

// Others

void Enemy::takeDamage(int d) {
    if (d > 0) {
        int newHP = this->_hp - d;
        if (newHP < 0)
            this->_hp = 0;
        else
            this->_hp = newHP;
    }
}
