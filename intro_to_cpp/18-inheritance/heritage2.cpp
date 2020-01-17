/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 11:13:01 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 11:20:42 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

// Classes inherit public info, except constructor/destructor

// Public: accessible form anywhere
// Protected: only accessible from a instance of the class or child of the class (used mostly to pass functions/attributes to child)
// Private: only accessible from the instance of the class

class Animal {
    private:
        int _numberOfLegs;

    public:
        Animal();
        Animal(Animal const &);
        Animal &    operator=(Animal const &);
        ~Animal();

        void        run(int distance);
        void        call();
        void        eat(std::string const & food);
        void        walk(int distance);
};

class Cat : public Animal {
    public:
        Cat();
        Cat(Cat const &);
        Cat &       operator=(Cat const &);
        ~Cat();

        void        scornSomeone(std::string const & target);
};

class Pony : public Animal {
    public:
        Pony();
        Pony(Cat const &);
        Pony &       operator=(Pony const &);
        ~Pony();

        void        doMagic(std::string const & target);
};