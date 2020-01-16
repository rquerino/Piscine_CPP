/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:23:51 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 17:00:26 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain {
    private:
        int         _iq;
        int         _age;
        std::string _hex;

    public:
        Brain(void);
        ~Brain(void);
        void        setIq(int);
        void        setAge(int);
        int         getIq(void);
        int         getAge(void);
        std::string identify(void);
};

#endif