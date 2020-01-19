/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:30:27 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:14:27 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        RadScorpion(RadScorpion const & copy);
        virtual ~RadScorpion(void);

        // Operator
        RadScorpion &     operator=(RadScorpion const & rhs);
        
        virtual void takeDamage(int);
};

#endif