/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:43:18 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 22:47:28 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    byPtr(std::string* str) {
    *str += " and ponies";
}

void    byConstPtr(std::string const * str) {
    std::cout << *str << std::endl;
}

void    byRef(std::string& str) {
    str += " and ponies";
}

void    byConstRef(std::string const & str) {
    std::cout << str << std::endl;
}

int     main() {
    std::string str = "I like butterflies";

    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);
    
    str = "I like otters";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);

    return 0;
}