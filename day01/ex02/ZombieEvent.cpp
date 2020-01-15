/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 04:47:11 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 05:43:38 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
    return;
}

ZombieEvent::~ZombieEvent(void) {
    return;
}

void    ZombieEvent::setZombieType(std::string x) {
    this->_zombieType = x;
}

Zombie *ZombieEvent::newZombie(std::string x) {
    return (new Zombie(x, _zombieType));
}

Zombie *ZombieEvent::randomChump(void) {
    std::string name = "random";
    int letter;

    srand (time(NULL));
    for (int i = 0; i < 6; i++) {   
        letter = rand() % 26;
        name[i] = 'a' + letter;
    }
    Zombie* zb = new Zombie(name, _zombieType);
    zb->announce();
    return zb;
}