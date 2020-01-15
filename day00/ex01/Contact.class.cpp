/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:15:42 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 13:58:50 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

// Constructor
Contact::Contact(void) {
    // std::cout << "Constructor called" << std::endl;
    return;
}
// Destructor
Contact::~Contact(void) {
    // std::cout << "Destructor called" << std::endl;
    return;
}

// Getters
std::string Contact::getFirstName(void) {
    return this->_firstName;
}

std::string Contact::getLastName(void) {
    return this->_lastName;
}

std::string Contact::getnickname(void) {
    return this->_nickname;
}
std::string Contact::getLogin(void) {
    return this->_login;
}

std::string Contact::getPostalAddress(void) {
    return this->_postalAddress;
}

std::string Contact::getEmailAddress(void) {
    return this->_emailAddress;
}

std::string Contact::getPhoneNumber(void) {
    return this->_phoneNumber;
}

std::string Contact::getBirthdayDate(void) {
    return this->_birthdayDate;
}

std::string Contact::getDarkestSecret(void) {
    return this->_darkestSecret;
}

// Setters
void    Contact::setFirstName(std::string x) {
    this->_firstName = x;
    return;
}
void    Contact::setLastName(std::string x) {
    this->_lastName = x;
    return;
}
void    Contact::setnickname(std::string x) {
    this->_nickname = x;
    return;
}
void    Contact::setLogin(std::string x) {
    this->_login = x;
    return;
}
void    Contact::setPostalAddress(std::string x) {
    this->_postalAddress = x;
    return;
}
void    Contact::setEmailAddress(std::string x) {
    this->_emailAddress = x;
    return;
}
void    Contact::setPhoneNumber(std::string x) {
    this->_phoneNumber = x;
    return;
}
void    Contact::setBirthdayDate(std::string x) {
    this->_birthdayDate = x;
    return;
}
void    Contact::setDarkestSecret(std::string x) {
    this->_darkestSecret = x;
    return;
}