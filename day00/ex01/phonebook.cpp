/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:15:44 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 19:28:07 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    addCommand(Contact phonebook) {
    std::string input;

    std::cout << "Complete the following form:" << std::endl;
    std::cout << "First Name: ";
    std::cin >> input;
    phonebook.setFirstName(input);
    std::cout << "Last Name: ";
    std::cin >> input;
    phonebook.setLastName(input);
    std::cout << "Nickname: ";
    std::cin >> input;
    phonebook.setnickname(input);
    std::cout << "Login: ";
    std::cin >> input;
    phonebook.setLogin(input);
    std::cout << "Postal Address: ";
    std::cin >> input;
    phonebook.setPostalAddress(input);
    std::cout << "Email Address: ";
    std::cin >> input;
    phonebook.setEmailAddress(input);
    std::cout << "Phone Number: ";
    std::cin >> input;
    phonebook.setPhoneNumber(input);
    std::cout << "Birthday Date: ";
    std::cin >> input;
    phonebook.setBirthdayDate(input);
    std::cout << "Favorite Meal: ";
    std::cin >> input;
    phonebook.setFavoriteMeal(input);
    std::cout << "Underwear Color: ";
    std::cin >> input;
    phonebook.setUnderwearColor(input);
    std::cout << "Darkest Secret: ";
    std::cin >> input;
    phonebook.setDarkestSecret(input);
    std::cout << "Contact saved." << std::endl;
    std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
    return;
}

void    adjustField(std::string str) {
    std::string tmp;
    int         i = 0;

    while (i < 10) {
        if (str[i] && i < 9)
            tmp[i] = str[i];
        else if (str[i] && i == 9) // Truncate
            tmp[i] = '.';
        else
            tmp[i] = ' '; // Fill with spaces
    }
    str = tmp;
}

void    displaySpecific(Contact phonebook[], int n) {
    std::string input;
    int         i;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthdayDate;
    std::string favoriteMeal;
    std::string underwearColor;
    std::string darkestSecret;


    std::cout << "If you want for more details about one, please enter the index:" << std::endl;
    std::cin >> input;
    i = std::stoi(input);
    if (i <= n) {
        firstName = phonebook[i].getFirstName();
        std::cout << "First Name: " << firstName << std::endl;
        lastName = phonebook[i].getLastName();
        std::cout << "Last Name: " << lastName << std::endl;
        nickname = phonebook[i].getnickname();
        std::cout << "Nickname: " << nickname << std::endl;
        login = phonebook[i].getLogin();
        std::cout << "Login: " << login << std::endl;
        postalAddress = phonebook[i].getPostalAddress();
        std::cout << "Postal Address: " << postalAddress << std::endl;
        emailAddress = phonebook[i].getEmailAddress();
        std::cout << "Email Address: " << emailAddress << std::endl;
        phoneNumber = phonebook[i].getPhoneNumber();
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        birthdayDate = phonebook[i].getBirthdayDate();
        std::cout << "Birthday Date: " << birthdayDate << std::endl;
        favoriteMeal = phonebook[i].getFavoriteMeal();
        std::cout << "FavoriteMeal: " << favoriteMeal << std::endl;
        underwearColor = phonebook[i].getUnderwearColor();
        std::cout << "Underwear Color: " << underwearColor << std::endl;
        darkestSecret = phonebook[i].getDarkestSecret();
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
        std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
    } else {
        std::cout << "Your index is out of range or doesn't exist.\n" << std::endl;
        std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
    }
    return;
}

void    displaySearch(Contact phonebook[], int n) {
    std::string firstName;
    std::string lastName;
    std::string nickname;
    int         max;

    if (n > 3)
        max = 3;
    else
        max = n;

    std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    for (int i = 0; i <= max; i++) {
        firstName = phonebook[i].getFirstName();
        adjustField(firstName);
        lastName = phonebook[i].getLastName();
        adjustField(lastName);
        nickname = phonebook[i].getnickname();
        adjustField(nickname);
        std::cout << "|    " << i << "    ";
        std::cout << firstName;
        std::cout << lastName;
        std::cout << nickname;
        std::cout << "|" << std::endl;
    }
    displaySpecific(phonebook, n);
}

int     main() {
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
    while (exit == 1) {
        getline(std::cin, input, '\n');
        if (input == "ADD" && i == 7)
            std::cout << "Your phonebook is already full. You can use SEARCH or EXIT." << std::endl;
        else if (input == "ADD") {
            addCommand(phonebook[i]);
            i++;
        } else if (input == "SEARCH" && i == 0)
            std::cout << "Your phonebook is empty. You can use ADD or EXIT." << std::endl;
        else if (input == "SEARCH") {
            displaySearch(phonebook, i);
        } else if (input == "EXIT") {
            std::cout << "Thank you for using 42 Phonebook! Have a nice day :)" << std::endl;
            exit = 0;
        } else
            std::cout << "Please use a valid command. Available commands: ADD, SEARCH or EXIT." << std::endl;
    }
    return 0;
}