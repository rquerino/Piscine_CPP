/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:41:19 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 19:44:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad(void) {
    this->_sq = NULL;
    this->_size = 0;
}

Squad::Squad(Squad const & copy) {
    t_squad*    tmp;
    // Loop to delete all inside t_squad* _team before including a new one
	while (this->_sq)
	{
		tmp = this->_sq->next;
		delete this->_sq->soldier;
		delete this->_sq;
		this->_sq = tmp;
	}

    this->_sq = copy._sq;
    this->_size = copy._size;
}

Squad::~Squad(void) {
    t_squad*    tmp;

    // Loop to delete all inside t_squad* _team
	while (this->_sq)
	{
		tmp = this->_sq->next;
		delete this->_sq->soldier;
		delete this->_sq;
		this->_sq = tmp;
	}
}

// Operator
Squad &     Squad::operator=(Squad const & rhs) {

}


// Interface funcs
int Squad::getCount(void) const {
    return this->_size;
}

// CHeck this function!!!!
ISpaceMarine* Squad::getUnit(int i) const {
    t_squad	*tmp;

	tmp = this->_sq;
	while (i != 0 && tmp != NULL)
	{
		tmp = tmp->next;
		i--;
	}
	return (tmp->soldier);
}

int Squad::push(ISpaceMarine* soldier) {
    t_squad	*copy;

	if (this->_sq == NULL)
	{
		this->_sq = new t_squad;
		this->_sq->soldier = soldier;
		this->_sq->next = NULL;
		this->_sq = this->_size + 1;
		return (this->_size);
	}
	copy = this->_sq;
	while (copy->next)
		copy = copy->next;

	copy->next = new t_squad;
	copy->next->soldier = soldier;
	copy->next->next = NULL;
	this->_size = this->_size + 1;
	return (this->_size);
}



/*

class Squad : public ISquad
{
    public:
        Squad(void);
        Squad(const Squad &src);

        ~Squad(void);

        Squad   &operator= (const Squad &rhs);

        virtual int           push(ISpaceMarine *marine);

        virtual int           getCount(void) const;
        virtual ISpaceMarine  *getUnit(int n) const;

    private:
        typedef struct        s_container
        {
            ISpaceMarine          *unit;
            struct s_container    *next;
        }                     t_container;

        int                   _nbr_units;
        t_container           *_squad;

        void                  _copyUnits(const Squad &src);
        void                  _destroyUnits(void);
        bool                  _unitAlreadyIn(ISpaceMarine *marine, \
                                              t_container *squad);
};

#include "Squad.hpp"

Squad::Squad(void)
{
    this->_nbr_units = 0;
    this->_squad = NULL;
    return ;
}

Squad::Squad(const Squad &src)
{
    this->_copyUnits(src);
    this->_nbr_units = src._nbr_units;
    return ;
}

Squad::~Squad(void)
{
    this->_destroyUnits();
    return ;
}

Squad
&Squad::operator= (const Squad &rhs)
{
    if (this != &rhs)
    {
        this->_destroyUnits();
        this->_copyUnits(rhs);
        this->_nbr_units = rhs._nbr_units;
    }
    return (*this);
}

int
Squad::push(ISpaceMarine *marine)
{
    t_container  *tmp;

    tmp = this->_squad;
    if (marine != NULL && this->_unitAlreadyIn(marine, tmp) == false)
    {
        tmp = this->_squad;
        if (this->_squad != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_container;
            tmp->next->unit = marine;
            tmp->next->next = NULL;
        }
        else
        {
            this->_squad = new t_container;
            this->_squad->unit = marine;
            this->_squad->next = NULL;
        }
        this->_nbr_units += 1;
    }
    return (this->_nbr_units);
}


int
Squad::getCount(void) const
{
    return (this->_nbr_units);
}

ISpaceMarine
*Squad::getUnit(int n) const
{
    t_container  *tmp;

    tmp = this->_squad;
    if (n < 0 || n >= this->_nbr_units)
    {
        return (NULL);
    }
    while (n--)
    {
        tmp = tmp->next;
    }
    return (tmp->unit);
}

void
Squad::_copyUnits(const Squad &src)
{
    for (int i = 0; i < src.getCount(); i += 1)
    {
        push(src.getUnit(i));
    }
    return ;
}

void
Squad::_destroyUnits(void)
{
    t_container  *tmp;

    if (this->_squad != NULL)
    {
        delete this->_squad->unit;
        tmp = this->_squad;
        this->_squad = this->_squad->next;
        delete tmp;
        return (this->_destroyUnits());
    }
    return ;
}

bool
Squad::_unitAlreadyIn(ISpaceMarine *marine, t_container *squad)
{
    if (squad == NULL)
    {
        return (false);
    }
    else if (marine == squad->unit)
    {
        return (true);
    }
    else
    {
        return (this->_unitAlreadyIn(marine, squad->next));
    }
}

*/