/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:15:50 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 14:20:54 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void    f1(void) {
    Sample instance;

    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

    return;
}

int     main() {
    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

    return 0;
}