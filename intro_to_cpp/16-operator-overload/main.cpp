/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:37:38 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 14:39:36 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Integer.hpp"

int main() {
    Integer x(30);
    Integer y(10);
    Integer z(0);

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of y: " << y << std::endl;
    y = Integer(12);
    std::cout << "Value of y: " << y << std::endl;

    std::cout << "Value of z: " << z << std::endl;
    z = x + y;
    std::cout << "Value of z: " << z << std::endl;    

    return 0;
}