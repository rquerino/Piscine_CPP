/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:44:41 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/22 21:29:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data
{
	std::string s1;
	int		 n;
	std::string s2;
};

int     randomAlphaNum(void) {
    int nbr1;
    int nbr2;
    
    //num: 48-57
    //upperAlpha: 65-90
    //lowerAlpha: 97-122
    nbr1 = rand() % 3;
    if (nbr1 == 0)
        nbr2 = rand() % 10 + 48;
    else if (nbr1 == 0)
        nbr2 = rand() % 25 + 65;
    else
        nbr2 = rand() % 25 + 97;
	return nbr2;
}

void	*serialize(void)
{
	Data *data = new Data;
	char s1[9];
	char s2[9];
	
    for (int i = 0; i < 8; i++) {
		s1[i] = static_cast<char>(randomAlphaNum());
		s2[i] = static_cast<char>(randomAlphaNum());
	}
	s1[8] = '\0';
	s2[8] = '\0';

	data->n = rand();
	data->s1.assign(s1);
	data->s2.assign(s2);
    
    std::cout << "Serializing:" << std::endl;
    std::cout << "Random string 1: " << data->s1 << std::endl;
    std::cout << "Random number:  " << data->n << std::endl;
    std::cout << "Random string 2: " << data->s2 << std::endl;

	return (reinterpret_cast<void*>(data));
}

// It is used to convert one pointer of another pointer of any type, no matter either the class
// is related to each other or not. 
// It does not check if the pointer type and data pointed by the pointer is same or not.
// It can typecast any pointer to any other data type and is only used to typecast any pointer to its original type.
// https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/

Data	*deserialize(void * raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	void *a;
	Data *b;

	a = serialize();
	std::cout << std::endl;
	std::cout << "Address of random serialized Data: " << a << std::endl;
	b = deserialize(a);
    std::cout << "Deserializing:" << std::endl;
	std::cout << "s1: " << b->s1 << std::endl;
	std::cout << "n:  " << b->n << std::endl;
	std::cout << "s2: " << b->s2 << std::endl;

	return 0;
}