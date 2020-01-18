/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:20 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:07:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:
    unsigned int    _criticalAttackDamage;
    unsigned int    _incendiaryAttackDamage;
    unsigned int    _corrosiveAttackDamage;
    unsigned int    _shockAttackDamage;
    unsigned int    _explosiveAttackDamage;

public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap();

    // Operator
    FragTrap &      operator=(FragTrap const & rhs);

    // Attacks
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            criticalAttack(std::string const & target);
    void            incendiaryAttack(std::string const & target);
    void            corrosiveAttack(std::string const & target);
    void            shockAttack(std::string const & target);
    void            explosiveAttack(std::string const & target);

    // Random attack
    void            vaulthunter_dot_exe(std::string const & target);

    // Getters
    unsigned int    getCriticalAttackDamage(void);
    unsigned int    getIncendiaryAttackDamage(void);
    unsigned int    getCorrosiveAttackDamage(void);
    unsigned int    getShockAttackDamage(void);
    unsigned int    getExplosiveAttackDamage(void);};

#endif