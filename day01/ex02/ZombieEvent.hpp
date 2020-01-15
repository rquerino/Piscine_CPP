/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 04:47:09 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 05:12:01 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include "Zombie.hpp"

class ZombieEvent {
    private:
        std::string _zombieType;

    public:
        ZombieEvent(void);
        ~ZombieEvent(void);
        void    setZombieType(std::string);
        Zombie *newZombie(std::string);
        Zombie *randomChump(void);
};

#endif