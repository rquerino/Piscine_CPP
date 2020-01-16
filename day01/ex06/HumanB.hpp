/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:15:18 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:56:01 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon*     _weapon; // maybe pointer
    
    public:
        HumanB(std::string);
        ~HumanB(void);
        void        setName(std::string);
        std::string getName(void);
        void        setWeapon(Weapon&);
        void        attack(void);
};

#endif