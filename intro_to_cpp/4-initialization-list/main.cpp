/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:08:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 11:12:05 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main() {
    Sample1 instance1('a', 42, 4.2f);
    // Class using initialization list
    Sample2 instance2('b', 24, 2.4f);

    return 0;
}