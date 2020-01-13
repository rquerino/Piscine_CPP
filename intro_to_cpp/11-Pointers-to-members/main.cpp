/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:33:02 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 14:39:55 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main() {

    Sample  instance;
    // Just like C, it's a pointer to instance's address
    Sample* instancep = &instance;

    // Syntax of a normal pointer without the "Sample::". It's initialized to NULL
    int     Sample::*p = NULL;
    void    (Sample::*f)(void) const;

    p = &Sample::foo;

    std::cout << "Value of member foo: " << instance.foo << std::endl;
    // update through pointer
    instance.*p = 21;
    std::cout << "Value of member foo: " << instance.foo << std::endl;
    // Update through a pointer to a pointer
    instancep->*p = 42;
    std::cout << "Value of member foo: " << instance.foo << std::endl;

    // Pointer to a function
    f = &Sample::bar;

    (instance.*f)();
    (instancep->*f)();

    return 0;

}