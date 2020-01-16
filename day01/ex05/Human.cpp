/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:34:47 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 16:59:03 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
    return;
}

Human::~Human(void) {
    return;
}

std::string Human::identify(void) {
    return (this->_brain.identify());
}

Brain       Human::getBrain(void) {
    return this->_brain;
}
