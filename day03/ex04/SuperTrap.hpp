/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:25:53 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 17:25:12 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap  {

public:
    SuperTrap(void);
    SuperTrap(std::string name);
    ~SuperTrap();

    // Operator
    SuperTrap &     operator=(SuperTrap const & rhs);

    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);
};

#endif