/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:17:30 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 04:40:31 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony {
    private:
        std::string _name;
        std::string _color;
    
    public:
        Pony(std::string);
        ~Pony(void);
        void        setName(std::string);
        void        setColor(std::string);
        std::string getName(void);
        std::string getColor(void);
};

#endif