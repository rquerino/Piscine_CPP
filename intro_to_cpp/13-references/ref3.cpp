/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:52:02 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 22:59:52 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
    private:
        std::string _login;

    public:
        Student(std::string const & login) : _login(login) {
        }

        std::string&        getLoginRef() {
            return this->_login;
        }

        std::string const & getLoginRefConst() const {
            return this->_login;
        }

        std::string*        getLoginPtr() {
            return &(this->_login);
        }

        std::string const * getLoginPtrConst() const {
            return &(this->_login);
        }
};

int main() {
    Student         bob = Student("bfubar");
    Student const   jim = Student("jfubar");

    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
    std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

    bob.getLoginRef() = "bobfubar";
    std::cout << bob.getLoginRefConst() << std::endl;
 
    *(bob.getLoginPtr()) = "bobbyfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    return 0;
}