/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:36:20 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 23:51:50 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

class FragTrap
{
private:
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    std::string     _name;
    unsigned int    _meleeAttackDamage;
    unsigned int    _rangedAttackDamage;
    unsigned int    _armorDamageReduction;
    unsigned int    _criticalAttackDamage;
    unsigned int    _incendiaryAttackDamage;
    unsigned int    _corrosiveAttackDamage;
    unsigned int    _shockAttackDamage;
    unsigned int    _explosiveAttackDamage;
    unsigned int    _randomAttackDamage;

public:
    FragTrap(std::string name);
    ~FragTrap();

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

    // Life loss/gain related
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

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
    unsigned int    getCriticalAttackDamage(void);
    unsigned int    getIncendiaryAttackDamage(void);
    unsigned int    getCorrosiveAttackDamage(void);
    unsigned int    getShockAttackDamage(void);
    unsigned int    getExplosiveAttackDamage(void);
    unsigned int    getRandomAttackDamage(void);

};

#endif