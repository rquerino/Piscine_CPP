/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:20:24 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 21:37:26 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
    public:
        virtual void    sayHello(std::string const & target);
};

class Warrior : public Character {
    public:
        // You can overwrite a class to a different behaviour
        virtual void    sayHello(std::string const & target);
};

class Cat {
    // [...]
};

void    Character::sayHello(std::string const & target) {
    std::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::sayHello(std::string const & target) {
    std::cout << "F*** Off " << target << ", I don't like you !" << std::endl;
}

int     main() {
    // This is OK, obviously, Warrior IS a Warrior
    Warrior*    a = new Warrior();

    // This is also OK because Warrior IS a Character
    // The compiler will understand this as a character, so it'll ignore the sayHello function of Warrior.
    // If you add 'virtual' to the function, it'll be dynamic link (virtual member function)
    Character*  b = new Warrior();

    // This would NOT BE OK because Character IS NOT a Warrior
    // Warrior is a Character, reverse is not true
    // Warrior* c = new Character();

    // This would also NOT BE OK because Cat is not a Character
    // Character*   d = new Cat();

    a->sayHello("students");
    b->sayHello("students");

    return 0;
}