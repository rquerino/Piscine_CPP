/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 05:52:03 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 16:04:13 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _n(N) {
    this->_zombie = new Zombie[N];
    std::cout << "A Horde of " << this->_n << " new Zombies is born" << std::endl;
    std::string name = "random";
    int letter;

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < 6; i++) { 
            letter = rand() % 26;
            name[i] = 'a' + letter;
        }
        this->_zombie[j].setName(name);
        this->_zombie[j].setType("Undead horde");
    }
}

ZombieHorde::~ZombieHorde(void) {
    std::cout << "A Horde of " << this->_n << " Zombies is dead" << std::endl;
}

void    ZombieHorde::announce(void) {
    for (int i = 0; i < this->_n; i++) {
        this->_zombie[i].announce();
    }
}