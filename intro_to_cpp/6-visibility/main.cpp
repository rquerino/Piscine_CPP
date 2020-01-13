/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:59:50 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 12:17:17 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main() {
    Sample instance;

    instance.publicFoo = 42;
    std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
    
    // This can only be accessed by the constructor, it'll get an error when compiling because it's private
    // instance._privateFoo = 42;
    // std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

    instance.publicBar();

    return 0;
}