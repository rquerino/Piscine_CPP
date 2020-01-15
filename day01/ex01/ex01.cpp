/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 04:42:16 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:45:29 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak() {
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    // You need to delete(free) any heap allocated memory
    delete panthere;
}