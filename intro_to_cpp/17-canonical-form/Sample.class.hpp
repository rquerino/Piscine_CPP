/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:08:10 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 15:21:20 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample {
public:
    Sample(void);
    Sample(int const n);
    Sample(Sample const & src);
    ~Sample(void);

    Sample &    operator-(Sample const & rhs);

    int         getFoo(void) const;

private:
    int _foo;

};

std::ostream &  operator<<(std::ostream & o, Sample const & i);

#endif