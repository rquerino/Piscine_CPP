/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:19:24 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 00:22:09 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;

public:
    // Can't be instantiated without parameters, but still has to use Coplien’s form (HOW???) 
    Sorcerer(void); // Need to check this! ????
    Sorcerer(const Sorcerer & copy);
    Sorcerer(std::string n, std::string t);
    ~Sorcerer();

    // Operator
    Sorcerer &  operator=(Sorcerer const & rhs);

    // Getters
    std::string getName(void);
    std::string getTitle(void);

    // Setters
    void        setName(std::string n);
    void        setTitle(std::string t);

    // Others
    void        polymorph(Victim const &) const;
};
// If put outsite the class, it doesn't use 'friend'
std::ostream &  operator<< (std::ostream & o, const Sorcerer & rhs);

#endif