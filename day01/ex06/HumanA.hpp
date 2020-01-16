/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:13:12 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:54:20 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon&     _weapon;
    
    public:
        HumanA(std::string, Weapon&);
        ~HumanA(void);
        void        setName(std::string);
        std::string getName(void);
        void        attack(void);
};

#endif