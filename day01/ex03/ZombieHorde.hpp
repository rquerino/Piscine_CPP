/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 05:52:02 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 15:15:37 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {
    private:
        Zombie  *_zombie;
        int     _n;

    public:
        ZombieHorde(int);
        ~ZombieHorde(void);
        void    announce(void);
};

#endif