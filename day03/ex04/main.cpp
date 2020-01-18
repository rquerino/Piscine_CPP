/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:04 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 16:50:56 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main() {
    SuperTrap   supertrap("Meat Unicycle");
    ScavTrap    scavtrap("Gundalf");
    
    std::cout << std::endl;
    std::cout << "--BATTLE ROUND--" << std::endl;
    std::cout << std::endl;
    supertrap.meleeAttack(scavtrap.getName());
    scavtrap.takeDamage(supertrap.getMeleeAttackDamage());
    // Ninja special attack
    supertrap.ninjaShoebox(scavtrap);
    scavtrap.takeDamage(supertrap.getRandomAttackDamage());
    // Frag special attack
    supertrap.vaulthunter_dot_exe(scavtrap.getName());
    scavtrap.takeDamage(supertrap.getRandomAttackDamage());
    std::cout << scavtrap.getName() << " found a cheeseburger!" << std::endl;
    scavtrap.beRepaired(40);
    scavtrap.meleeAttack(supertrap.getName());
    supertrap.takeDamage(scavtrap.getMeleeAttackDamage());
    std::cout << std::endl;

    return 0;
}