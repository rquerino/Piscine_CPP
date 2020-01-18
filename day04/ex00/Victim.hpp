/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 00:00:40 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/18 00:20:24 by rquerino         ###   ########.fr       */
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
        std::string getName(void);

        // Setters
        void        setName(std::string n);

        //  Others
        void getPolymorphed() const;
};

std::ostream &  operator<< (std::ostream & o, const Victim & rhs);

#endif