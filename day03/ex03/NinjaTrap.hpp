/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:31:39 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 14:53:51 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
private:
    unsigned int    _ninjaAttackDamage;    

public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    ~NinjaTrap();

    // Random challenges
    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);

    // Random challenge/attack
    void            ninjaShoebox(ClapTrap& target);
    void            ninjaShoebox(ScavTrap& target);
    void            ninjaShoebox(FragTrap& target);
    void            ninjaShoebox(NinjaTrap& target);

    // Getters
    unsigned int    getNinjaAttackDamage(void);

};

#endif