/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 12:20:27 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:11:24 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap {

protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    unsigned int    _meleeAttackDamage;
    unsigned int    _rangedAttackDamage;
    unsigned int    _armorDamageReduction;
    unsigned int    _randomAttackDamage;


public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap();

    // Operator
    ClapTrap &      operator=(ClapTrap const & rhs);

    // Attacks
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    
    // Life/energy loss/gain related
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    // Setters
    void            setLevel(unsigned int l);

    // Getters
    unsigned int    getHitPoints(void);
    unsigned int    getMaxHitPoints(void);
    unsigned int    getEnergyPoints(void);
    unsigned int    getMaxEnergyPoints(void);
    unsigned int    getLevel(void);
    std::string     getName(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamage(void);
    unsigned int    getArmorDamageReduction(void);
    unsigned int    getRandomAttackDamage(void);
};

#endif