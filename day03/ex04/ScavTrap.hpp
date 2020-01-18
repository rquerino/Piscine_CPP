/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:31:58 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:23:21 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    unsigned int    _russianRouletteDamage;
    unsigned int    _thumbWarDamage;
    unsigned int    _swallowGranadeDamage;
    unsigned int    _telescopeTheSunDamage;
    unsigned int    _skydiveDamage;

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap();

    // Operator
    ScavTrap &      operator=(ScavTrap const & rhs);

    // Random challenges
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
    void            russianRoulette(std::string const & target);
    void            thumbWar(std::string const & target);
    void            swallowGranade(std::string const & target);
    void            telescopeTheSun(std::string const & target);
    void            skydive(std::string const & target);

    // Random challenge/attack
    void            challengeNewcomer(std::string const & target);

    // Getters
    unsigned int    getRussianRouletteDamage(void);
    unsigned int    getThumbWarDamage(void);
    unsigned int    getSwallowGranadeDamage(void);
    unsigned int    getTelescopeTheSunDamage(void);
    unsigned int    getSkydiveDamage(void);

};

#endif