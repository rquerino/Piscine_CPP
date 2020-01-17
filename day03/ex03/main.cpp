/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:04 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 15:09:19 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main() {
    FragTrap    fragtrap("Meat Unicycle");
    ScavTrap    scavtrap("Gundalf");
    NinjaTrap   ninjatrap("Darth3PO");
    
    std::cout << std::endl;
    std::cout << "--BATTLE ROUND--" << std::endl;
    std::cout << std::endl;
    ninjatrap.ninjaShoebox(fragtrap);
    fragtrap.takeDamage(ninjatrap.getRandomAttackDamage());
    ninjatrap.ninjaShoebox(scavtrap);
    scavtrap.takeDamage(ninjatrap.getRandomAttackDamage());
    fragtrap.meleeAttack(scavtrap.getName());
    scavtrap.takeDamage(fragtrap.getMeleeAttackDamage());
    scavtrap.rangedAttack(fragtrap.getName());
    fragtrap.takeDamage(scavtrap.getRangedAttackDamage());
    std::cout << scavtrap.getName() << " found a cheeseburger!" << std::endl;
    scavtrap.beRepaired(15);
    fragtrap.vaulthunter_dot_exe(scavtrap.getName());
    scavtrap.takeDamage(fragtrap.getRandomAttackDamage());
    scavtrap.challengeNewcomer(fragtrap.getName());
    fragtrap.takeDamage(scavtrap.getRandomAttackDamage());

    return 0;
}