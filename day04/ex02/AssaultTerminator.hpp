/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:36:26 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 17:37:04 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    private:

    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const & copy);
        ~AssaultTerminator(void);
        // Operator
        AssaultTerminator &     operator=(AssaultTerminator const & rhs);

        virtual AssaultTerminator* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif