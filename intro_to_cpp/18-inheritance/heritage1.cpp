/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:08:55 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 11:11:37 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat {
    private:
        int _numberOfLegs;
    
    public:
        Cat();
        Cat(Cat const &);
        Cat &   operator=(Cat const &);
        ~Cat();

        void    run(int distance);
        void    scornSomeone(std::string const & target);

};


class Pony {
    private:
        int _numberOfLegs;

    public:
        Pony();
        Pony(Pony const &);
        Pony &   operator=(Pony const &);
        ~Pony();

        void    run(int distance);
        
        void    doMagic(std::string const & target);
};