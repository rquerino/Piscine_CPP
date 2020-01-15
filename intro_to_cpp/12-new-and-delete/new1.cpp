/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:19:00 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 22:26:09 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
    private:
        std::string _login;
    
    public:
        Student(std::string login) : _login(login) {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student() {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }
};

int main() {
    Student     bob = Student("bfubar");
    // Allocate memory automatically through malloc brackets
    Student*    jim = new Student("jfubar");

    // Do some stuff here

    // Delete instead of malloc free
    delete jim; // Jim is destroyed 
    
    return 0; // Bob is destroyed
}