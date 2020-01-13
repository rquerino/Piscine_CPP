/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:59:52 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/13 12:01:42 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:
    int     publicFoo;

    Sample(void);
    ~Sample(void);

    void    publicBar(void) const;

private:

    int     _privateFoo;

    void    _privateBar(void) const;

};

#endif