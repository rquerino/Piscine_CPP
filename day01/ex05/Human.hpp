/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:31:15 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 16:58:56 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <string>

class Human {
    private:
        Brain _brain;

    public:
        Human(void);
        ~Human(void);
        std::string identify(void);
        Brain       getBrain(void);
};

#endif