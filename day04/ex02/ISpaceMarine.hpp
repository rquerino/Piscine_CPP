/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:46:17 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 20:49:16 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual ~ISpaceMarine() {}
        virtual ISpaceMarine    *clone() const = 0;
        virtual void            battleCry() const = 0;
        virtual void            rangedAttack() const = 0;
        virtual void            meleeAttack() const = 0;
};

#endif