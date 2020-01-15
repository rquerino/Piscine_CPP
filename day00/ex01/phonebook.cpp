/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:15:44 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 20:47:26 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact     addNew(void) {
    Contact     phone_new;
    std::string input;

    std::cout << "Complete the following form:" << std::endl;
    std::cout << "First Name: ";
    std::cin >> input;
    phone_new.setFirstName(input);

    std::cout << "Last Name: ";
    std::cin >> input;
    phone_new.setLastName(input);

    std::cout << "Nickname: ";
    std::cin >> input;
    phone_new.setnickname(input);
    
    std::cout << "Login: ";
    std::cin >> input;
    phone_new.setLogin(input);

    std::cout << "Postal Address: ";
    std::cin >> input;
    phone_new.setPostalAddress(input);

    std::cout << "Email Address: ";
    std::cin >> input;
    phone_new.setEmailAddress(input);

    std::cout << "Phone Number: ";
    std::cin >> input;
    phone_new.setPhoneNumber(input);

    std::cout << "Birthday Date: ";
    std::cin >> input;
    phone_new.setBirthdayDate(input);

    std::cout << "Favorite Meal: ";
    std::cin >> input;
    phone_new.setFavoriteMeal(input);

    std::cout << "Underwear Color: ";
    std::cin >> input;
    phone_new.setUnderwearColor(input);

    std::cout << "Darkest Secret: ";
    std::cin >> input;
    phone_new.setDarkestSecret(input);

    std::cout << "Contact saved." << std::endl;

    return phone_new;
}

std::string adjustField(std::string str) {
    std::string tmp ("          ");
    int         len;

    len = str.length();
    if (len <= 10) {
        for (int i = 0; i < len; i++)
        tmp[i] = str[i];
    } else {
        for (int i = 0; i < 9; i++)
            tmp[i] = str[i];
        tmp[9] = '.';
    }
    return tmp;
}

void        displaySpecific(Contact phonebook) {
    std::string str;

    str = phonebook.getFirstName();
    std::cout << "First Name: " << str << std::endl;
    str = phonebook.getLastName();
    std::cout << "Last Name: " << str << std::endl;
    str = phonebook.getnickname();
    std::cout << "Nickname: " << str << std::endl;
    str = phonebook.getLogin();
    std::cout << "Login: " << str << std::endl;
    str = phonebook.getPostalAddress();
    std::cout << "Postal Address: " << str << std::endl;
    str = phonebook.getEmailAddress();
    std::cout << "Email Address: " << str << std::endl;
    str = phonebook.getPhoneNumber();
    std::cout << "Phone Number: " << str << std::endl;
    str = phonebook.getBirthdayDate();
    std::cout << "Birthday Date: " << str << std::endl;
    str = phonebook.getFavoriteMeal();
    std::cout << "FavoriteMeal: " << str << std::endl;
    str = phonebook.getUnderwearColor();
    std::cout << "Underwear Color: " << str << std::endl;
    str = phonebook.getDarkestSecret();
    std::cout << "Darkest Secret: " << str << std::endl;
    std::cout << std::endl;
}

void        displaySearch(Contact phonebook[], int n) {
    std::string string;
    std::string input;
    int         i;

    std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "|     " << i << "    ";
        string = adjustField(phonebook[i].getFirstName());
        std::cout << "|" << string;
        string = adjustField(phonebook[i].getLastName());
        std::cout << "|" << string;
        string = adjustField(phonebook[i].getnickname());        
        std::cout << "|" << string;
        std::cout << "|" << std::endl;
    }
    std::cout << "If you want for more details about one, please enter the index:" << std::endl;
    std::cin >> input;
    // if (input == "0" || input == "1" || input == "2" || input == "3" ||
    //     input == "4" || input == "5" || input == "6" || input == "7") {
    if (input >= "0" && input < "8") {
        i = std::stoi(input);
        if (i < n) {
            displaySpecific(phonebook[i]);
        } else
            std::cout << "Your index is out of range or doesn't exist." << std::endl;
    }  else
        std::cout << "Your index is out of range or doesn't exist." << std::endl;
}

int         main() {
    std::string input;
    Contact     phonebook[8];
    int         i = 0;
    int         exit = 1;

    std::cout << "Welcome to" << std::endl;
    std::cout << "██╗  ██╗██████╗     ██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
    std::cout << "██║  ██║╚════██╗    ██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
    std::cout << "███████║ █████╔╝    ██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
    std::cout << "╚════██║██╔═══╝     ██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
    std::cout << "     ██║███████╗    ██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
    std::cout << "     ╚═╝╚══════╝    ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
    while (exit) {
        std::cout << "Available commands: ADD, SEARCH or EXIT." << std::endl;
        std::cin >> input;
        if (input == "ADD" && i >= 8) {
            std::cout << "Your phonebook is already full. You can use SEARCH or EXIT." << std::endl;
        }
        else if (input == "ADD") {
            phonebook[i] = addNew();
            i++;
        } else if (input == "SEARCH" && i == 0) {
            std::cout << "Your phonebook is empty. You can use ADD or EXIT." << std::endl;
        }
        else if (input == "SEARCH") {
            displaySearch(phonebook, i);
        } else if (input == "EXIT") {
            std::cout << "Thank you for using 42 Phonebook! Have a nice day :)" << std::endl;
            exit = 0;
        }
    }
    return 0;
}