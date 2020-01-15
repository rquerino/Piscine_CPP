/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 04:47:06 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:54:12 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {
    private:
        std::string _name;
        std::string _type;

    public:
        Zombie(std::string, std::string);
        ~Zombie(void);
        void        announce(void);
        void        setName(std::string);
        void        setType(std::string);
        std::string getName(void);
        std::string getType(void);
};

#endif