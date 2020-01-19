/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:47:48 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 20:41:25 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad(void) { return; }
        virtual int getCount(void) const = 0;
        virtual ISpaceMarine* getUnit(int i) const = 0;
        virtual int push(ISpaceMarine* soldier) = 0;
};

#endif