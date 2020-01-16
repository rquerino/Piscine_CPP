/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:53:22 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/16 13:55:29 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
public:
    Sample(void);
    ~Sample(void);

    void    bar(char const c) const;
    void    bar(int const n) const;
    void    bar(float const z) const;
    void    bar(Sample const & i) const;
};

#endif