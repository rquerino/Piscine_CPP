/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:25:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 14:47:32 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
    protected:
        std::string _name;
        int         _damage;
        int         _apCost;

    public:
        AWeapon(void);
        AWeapon(AWeapon const & copy);
        AWeapon(std::string const & name, int apcost, int damage);
        ~AWeapon(void);

        // Operator
        AWeapon &  operator=(AWeapon const & rhs);

        // Getters
        std::string getName(void) const;
        int         getDamage(void) const;
        int         getApCost(void) const;

        // Setters
        void setName(std::string n);
        void setDamage(int d);
        void setApCost(int a);

        // Setters
        virtual void attack() const = 0;
};

#endif