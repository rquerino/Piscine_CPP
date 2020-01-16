/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:09:23 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:24:00 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
    private:
        std::string _type;

    public:
        Weapon(void);
        Weapon(std::string);
        ~Weapon(void);
        void        setType(std::string);
        std::string getType(void);
};

#endif