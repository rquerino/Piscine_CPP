/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:38:28 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/17 22:17:03 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// 'A'Character, A stands for Abstract! It's a convention to identify easily.
// Abstract classes can have attributes
class ACharacter {
    private:
        std::string _name;
        
    public:
        // With this = 0 it means that there's no definition for this method, the method can't be implemented.
        // The class will have a behaviour that is missing, it'll be abstract
        // This means that a class that inherits this class should implement it's own behaviour
        virtual void    attack(std::string const & target) = 0; 
        void            sayHello(std::string const & target);
};

class Warrior : public ACharacter {
    public:
        virtual void    attack(std::string const & target);
};

void    ACharacter::sayHello(std::string const & target) {
    std::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::attack(std::string const & target) {
    std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

// In the ACharacter example, we have 1 method with abstract behaviour method and 1 with concrete behavior.
// In this case, there's only abstract methods, that makes it an INTERFACE
// 'I'CoffeMaker, I stands for Interface! It's a convention to identify easily
// Interfaces cannot have attributes
// class ICoffeMaker {
//     public:
//         virtual void    fillWaterTank(IWaterSource * src) = 0;
//         virtual ICoffe* makeCoffe(std::string const & type) = 0;
// };

int     main() {
    ACharacter* a = new Warrior();

    // This would not be ok because ACharacter is abstract
    // ACharacter* b = new ACharacter();

    a->sayHello("students");
    a->attack("Roger");
    return 0;
}