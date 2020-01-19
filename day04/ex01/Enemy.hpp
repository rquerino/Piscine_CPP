/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:38:32 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 16:14:12 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
    protected:
        int         _hp;
        std::string _type;
        
    public:
        Enemy(void);
        Enemy(Enemy const & copy);
        Enemy(int hp, std::string const & type);
        virtual ~Enemy(void); // Without virtual it didn't compile. That way I can acces it from a pointer (?)

        // Operator
        Enemy &     operator=(Enemy const & rhs);


        // Getters
        int         getHP() const;
        std::string getType(void) const;

        // Setters
        void        setHP(int hp);
        void        setType(std::string type);


        virtual void takeDamage(int);
};

#endif