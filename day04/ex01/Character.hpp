/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:34:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:26:32 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        int         _ap;
        AWeapon*    _wp;

    public:
        Character(void);
        Character(Character const & copy);
        Character(std::string const & name);
        ~Character();

        // Operator
        Character &     operator=(Character const & rhs);

        void recoverAP();
        void equip(AWeapon* wp);
        void attack(Enemy* target);

        // Getters
        std::string getName(void) const;
        int         getAP(void) const;
        AWeapon* getWeapon(void) const;

        // Setters
        void        setName(std::string name); 
};

// If put outsite the class, it doesn't use 'friend'
std::ostream &  operator<< (std::ostream & o, const Character & rhs);

#endif