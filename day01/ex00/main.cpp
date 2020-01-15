/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:17:33 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:40:00 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void    ponyOnTheHeap(void) {
    Pony*   heap = new Pony("Heaper");

    heap->setColor("Beige");
    std::cout << "Pony " << heap->getName() << " is color: " << heap->getColor() << std::endl;

    delete heap;
}

void    ponyOnTheStack(void) {
    Pony    stack = Pony("Stacker");

    stack.setColor("Black");
    std::cout << "Pony " << stack.getName() << " is color: " << stack.getColor() << std::endl;
    // Stack is destroyed after executing
}   


int main() {
    std::cout << "Allocate Pony in Heap:" << std::endl;
    ponyOnTheHeap();
    
    std::cout << "Allocate Pony in Stack:" << std::endl;
    ponyOnTheStack();
    
    return 0;
}