/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:04 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 23:54:03 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {
    FragTrap claptrap("Claptrap");
    FragTrap jack("Handsome Jack");

    std::cout << "ROUND 1" << std::endl;
    claptrap.meleeAttack(jack.getName());
    jack.takeDamage(claptrap.getMeleeAttackDamage());
    jack.rangedAttack(claptrap.getName());
    claptrap.takeDamage(jack.getRangedAttackDamage());
    std::cout << std::endl;
    std::cout << "ROUND 2" << std::endl;
    std::cout << claptrap.getName() << "found a cheeseburguer!" << std::endl;
    claptrap.beRepaired(15);
    claptrap.vaulthunter_dot_exe(jack.getName());
    jack.takeDamage(claptrap.getRandomAttackDamage());

    return 0;
}