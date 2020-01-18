/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:31:39 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:22:33 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// Trick to not call ClapTrap 2 times: 'virtual’ keyword
class NinjaTrap : virtual public ClapTrap {
// Now it's protected attributes
protected:
    unsigned int    _ninjaAttackDamage;    

public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    ~NinjaTrap();

    // Operator
    NinjaTrap &     operator=(NinjaTrap const & rhs);

    // Attacks
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