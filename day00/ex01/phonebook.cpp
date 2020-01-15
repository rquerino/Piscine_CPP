/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:15:44 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 14:46:14 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    addCommand(Contact phonebook) {
    std::string buff;

    std::cout << "Complete the following form:" << std::endl;
    std::cout << "First Name: ";
    std::cin >> buff;
    phonebook.setFirstName(buff);
    std::cout << "Last Name: ";
    std::cin >> buff;
    phonebook.setLastName(buff);
    std::cout << "Nickname: ";
    std::cin >> buff;
    phonebook.setnickname(buff);
    std::cout << "Login: ";
    std::cin >> buff;
    phonebook.setLogin(buff);
    std::cout << "Postal Address: ";
    std::cin >> buff;
    phonebook.setPostalAddress(buff);
    std::cout << "Email Address: ";
    std::cin >> buff;
    phonebook.setEmailAddress(buff);
    std::cout << "Phone Number: ";
    std::cin >> buff;
    phonebook.setPhoneNumber(buff);
    std::cout << "Birthday Date: ";
    std::cin >> buff;
    phonebook.setBirthdayDate(buff);
    std::cout << "Darkest Secret: ";
    std::cin >> buff;
    phonebook.setDarkestSecret(buff);
    std::cout << "Contact saved." << std::endl;
    std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
    return;
}

int main() {
    std::string input;
    Contact phonebook[8];
    int     i = 0;
    int     exit = 1;

    std::cout << "Welcome to" << std::endl;
    std::cout << "██╗  ██╗██████╗     ██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
    std::cout << "██║  ██║╚════██╗    ██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
    std::cout << "███████║ █████╔╝    ██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
    std::cout << "╚════██║██╔═══╝     ██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
    std::cout << "     ██║███████╗    ██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
    std::cout << "     ╚═╝╚══════╝    ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
    std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
    while (exit) {
        getline(std::cin, input, '\n');
        if (input == "ADD" && i == 7)
            std::cout << "Your phonebook is full. You can use SEARCH or EXIT." << std::endl;
        else if (input == "ADD") {
            addCommand(phonebook[i]);
            i++;
        }
        else if (input == "EXIT")
            std::cout << "Thank you for using 42 Phonebook! Have a nice day :)" << std::endl;
            exit = 0;
    }
    return 0;
}