/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 00:00:40 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 13:08:37 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim {

    private:
        std::string _name;

    public:
        Victim(void); // Need to check this! ????
        Victim(const Victim & copy);
        Victim(std::string n);
        ~Victim();

        // Operator
        Victim &  operator=(Victim const & rhs);

        // Getters
        std::string getName(void) const;

        // Setters
        void        setName(std::string n);

        //  Others
        virtual void getPolymorphed() const; // Peon inherits and has a different behavior
};

std::ostream &  operator<< (std::ostream & o, const Victim & rhs);

#endif