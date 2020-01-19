/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:41:19 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 21:01:47 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad(void) {
    this->_squad = NULL;
    this->_size = 0;
}

Squad::Squad(Squad const & copy) {
    // Loop to push all units from copy
    for (int i = 0; i < copy.getCount(); i++)
        this->push(copy.getUnit(i));
    this->_size = copy._size;
}

Squad::~Squad(void) {
    t_squad *tmp;

    // Loop to delete all inside t_squad* _team
	while (this->_squad)
	{
		tmp = this->_squad->next;
		delete this->_squad->soldier;
		delete this->_squad;
		this->_squad = tmp;
	}
}

// Operator
Squad &     Squad::operator=(Squad const & rhs) {
    t_squad *tmp;

    // Loop to delete all inside t_squad* _team
	while (this->_squad)
	{
		tmp = this->_squad->next;
		delete this->_squad->soldier;
		delete this->_squad;
		this->_squad = tmp;
	}
    // Loop to push all units from rhs
    for (int i = 0; i < rhs.getCount(); i++)
        this->push(rhs.getUnit(i));
    this->_size = rhs._size;

    return *this;
}

// Interface funcs
int Squad::getCount(void) const {
    return this->_size;
}

ISpaceMarine    *Squad::getUnit(int i) const {
    t_squad *tmp;

	tmp = this->_squad;
	while (i != 0 && tmp != NULL)
	{
		tmp = tmp->next;
		i--;
	}
	return tmp->soldier;
}

int Squad::push(ISpaceMarine *soldier) {
    t_squad *tmp;

    tmp = this->_squad;
    if (isSoldierInSquad(tmp, soldier) == false && soldier != NULL)
    {
        if (this->_squad != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_squad;
            tmp->next->soldier = soldier;
            tmp->next->next = NULL;
        }
        else
        {
            this->_squad = new t_squad;
            this->_squad->soldier = soldier;
            this->_squad->next = NULL;
        }
        this->_size += 1;
    }
    return this->_size;
}

bool Squad::isSoldierInSquad(t_squad *squad, ISpaceMarine *soldier) {
    if (squad == NULL)
        return false;
    else if (soldier == squad->soldier) // Checks if the squad is null first to prevent segfault
        return true;
    else
        return (this->isSoldierInSquad(squad->next, soldier)); // God bless recursion
}