/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:36:02 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 22:41:54 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    int     numberOfBalls = 42;

    int*    ballsPtr = &numberOfBalls;
    int&    ballsRef = numberOfBalls;
    // int&    ballsRef2; // It's a constant pointing to nothing. Later on, you cannot point it to anything. It has to be initialized on declaration.

    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21;
    std::cout << numberOfBalls << std::endl;
    ballsRef = 84;
    std::cout << numberOfBalls << std::endl;

    return 0;
}