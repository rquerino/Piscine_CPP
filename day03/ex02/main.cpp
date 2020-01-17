/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:04 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 14:21:12 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    FragTrap fragtrap("Meat Unicycle");
    ScavTrap scavtrap("Gundalf");

    std::cout << "ROUND 1" << std::endl;
    fragtrap.meleeAttack(scavtrap.getName());
    scavtrap.takeDamage(fragtrap.getMeleeAttackDamage());
    scavtrap.rangedAttack(fragtrap.getName());
    fragtrap.takeDamage(scavtrap.getRangedAttackDamage());
    std::cout << std::endl;
    std::cout << "ROUND 2 - Scrappy Daddy stepped out!" << std::endl;
    std::cout << scavtrap.getName() << " found a pizza!" << std::endl;
    scavtrap.beRepaired(15);
    fragtrap.vaulthunter_dot_exe(scavtrap.getName());
    scavtrap.takeDamage(fragtrap.getRandomAttackDamage());
    scavtrap.challengeNewcomer(fragtrap.getName());
    fragtrap.takeDamage(scavtrap.getRandomAttackDamage());

    return 0;
}