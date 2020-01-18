/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 12:16:07 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 13:14:57 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}