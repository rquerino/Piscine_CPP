/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:31:00 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 14:54:05 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon 
{
    public:
        PowerFist(void);
        PowerFist(PowerFist const & copy);
        ~PowerFist(void);

        // Operator
        PowerFist &  operator=(PowerFist const & rhs);

        // Setters
        virtual void attack() const;
};

#endif