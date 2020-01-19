/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:29:33 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 14:54:02 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon 
{
    public:
        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const & copy);
        ~PlasmaRifle(void);

        // Operator
        PlasmaRifle &  operator=(PlasmaRifle const & rhs);

        // Setters
        virtual void attack() const;
};

#endif