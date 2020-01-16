/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 20:18:19 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 20:50:30 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void    Human::meleeAttack(std::string const & target) {
    std::cout << "Delivering a melee attack to " << target << std::endl;
}

void    Human::rangedAttack(std::string const & target) {
    std::cout << "Delivering a ranged attack to " << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target) {
    std::cout << "Shouting to intimidate " << target << std::endl;
}

void    Human::action(std::string const & action_name, std::string const & target) {
    int type[3] = {0, 1, 2};
}