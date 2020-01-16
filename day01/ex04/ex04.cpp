/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:10:23 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 16:17:08 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string     str = "HI THIS IS BRAIN";

    std::string*    strPtr = &str;
    std::string&    strRef = str;

    std::cout << "Pointer:   " << *strPtr << std::endl;
    std::cout << "Reference: " << strRef << std::endl;
    
    return 0;
}