/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:15:43 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 20:41:08 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact {
public:
    Contact(void);
    ~Contact(void);
    
    void    setFirstName(std::string);
    void    setLastName(std::string);
    void    setnickname(std::string);
    void    setLogin(std::string);
    void    setPostalAddress(std::string);
    void    setEmailAddress(std::string);
    void    setPhoneNumber(std::string);
    void    setBirthdayDate(std::string);
    void    setFavoriteMeal(std::string);
    void    setUnderwearColor(std::string);
    void    setDarkestSecret(std::string);

    std::string    getFirstName(void);
    std::string    getLastName(void);
    std::string    getnickname(void);
    std::string    getLogin(void);
    std::string    getPostalAddress(void);
    std::string    getEmailAddress(void);
    std::string    getPhoneNumber(void);
    std::string    getBirthdayDate(void);
    std::string    getFavoriteMeal(void);
    std::string    getUnderwearColor(void);
    std::string    getDarkestSecret(void);

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;

};

#endif