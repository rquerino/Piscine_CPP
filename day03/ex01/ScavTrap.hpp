/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:31:58 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 12:10:27 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>

class ScavTrap
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
    unsigned int    _russianRouletteDamage;
    unsigned int    _thumbWarDamage;
    unsigned int    _swallowGranadeDamage;
    unsigned int    _telescopeTheSunDamage;
    unsigned int    _skydiveDamage;
    unsigned int    _randomAttackDamage;

public:
    ScavTrap(std::string name);
    ~ScavTrap();

    // Attacks
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    // Random challenges
    void            russianRoulette(std::string const & target);
    void            thumbWar(std::string const & target);
    void            swallowGranade(std::string const & target);
    void            telescopeTheSun(std::string const & target);
    void            skydive(std::string const & target);

    // Random challenge/attack
    void            challengeNewcomer(std::string const & target);

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
    unsigned int    getRussianRouletteDamage(void);
    unsigned int    getThumbWarDamage(void);
    unsigned int    getSwallowGranadeDamage(void);
    unsigned int    getTelescopeTheSunDamage(void);
    unsigned int    getSkydiveDamage(void);
    unsigned int    getRandomAttackDamage(void);

};

#endif