/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:28:03 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 17:36:05 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    private:

    public:
        TacticalMarine(void);
        TacticalMarine(TacticalMarine const & copy);
        ~TacticalMarine(void);
        // Operator
        TacticalMarine &     operator=(TacticalMarine const & rhs);

        virtual TacticalMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif