/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:22:20 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:14:22 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(SuperMutant const & copy);
        virtual ~SuperMutant(void);

        // Operator
        SuperMutant &     operator=(SuperMutant const & rhs);
        
        virtual void takeDamage(int);
};

#endif