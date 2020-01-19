/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:41:21 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 20:54:06 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
    private:
        typedef struct s_squad{
            ISpaceMarine    *soldier;
            struct s_squad  *next;
        }               t_squad;
        
        t_squad     *_squad;
        int         _size;

    public:
        Squad(void);
        Squad(Squad const & copy);
        ~Squad(void);
        // Operator
        Squad &     operator=(Squad const & rhs);

        // Interface funcs
        virtual int getCount(void) const;
        virtual ISpaceMarine    *getUnit(int i) const;
        virtual int push(ISpaceMarine   *soldier);
        
        // Aux funcs
        bool isSoldierInSquad(t_squad *squad, ISpaceMarine *soldier);
};

#endif