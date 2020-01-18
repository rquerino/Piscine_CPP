/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 11:56:03 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 12:02:03 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

    private:
        std::string _name;

    public:
        Peon(void);
        Peon(const Peon & copy);
        Peon(std::string n);
        ~Peon();

        // Operator
        Peon &  operator=(Peon const & rhs);

        // Getters and setters inherited from Victim
        
        //  Others
        virtual void getPolymorphed() const; // virtual so it has a different behavior than Victim's function
};

#endif