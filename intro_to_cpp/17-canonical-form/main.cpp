/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:16:48 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 15:17:59 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main() {
    Sample instance1;
    Sample instance2(42);
    Sample instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;

    instance3 = instance2;
    std::cout << instance3 << std::endl;

    return 0;
}