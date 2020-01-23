/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:44:41 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/22 17:56:21 by rquerino         ###   ########.fr       */
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
    srand (time(NULL));
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
    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n:  " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;

	return (reinterpret_cast<void*>(data));
}

Data	*deserialize(void * raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	void *a;
	Data *b;

	a = serialize();
	b = deserialize(a);

    std::cout << "Deserializing:" << std::endl;
	std::cout << "s1: " << b->s1 << std::endl;
	std::cout << "n:  " << b->n << std::endl;
	std::cout << "s2: " << b->s2 << std::endl;

	return 0;
}










void 	*serialize(void)
{
	int 	i = -1;
	char	*data = new char[20];

	char	output[] =
	{
		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	};
	
	std::cout << "Serialized of Concatenated Arrays/Int Being Made: " << std::endl;
	while (++i < 8)
		data[i] = output[rand() % 62];
	i = 7;
	while (++i < 12)
		data[i] = rand() % 256 - 128;
	i = 11;
	while (++i < 20)
		data[i] = output[rand() % 62];
	data[i] = '\0';
	i = -1;
	std::cout << "Random Array 1: ";
	while (++i < 8)
		std::cout << data[i];
	std::cout << std::endl << "Random Integer: " << static_cast<int>(data[8]);
	i = 11;
	std::cout << std::endl << "Random Array 2: ";
	while (++i < 20)
		std::cout << data[i];
	std::cout << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data 	*deserialize(void	*raw)
{
	Data 		*data = new Data;

	data->n = 0;
	char		*input = reinterpret_cast<char*>(raw);
	int i = -1;

	while (++i < 8)
		data->s1 = data->s1 + input[i];
	data->n = input[8];
	i = 11;
	while (++i < 20)
		data->s2 = data->s2 + input[i];
	return (data);
}

int	main()
{
	void	*serial;
	Data	*deserial;

	srand(time(0));
	serial = serialize();
	std::cout << "Address of the random serialized data" << std::endl << serial << std::endl << std::endl;
	deserial = deserialize(serial);
	std::cout << "Results of deserializing the serialized data using the address" << std::endl <<
		"Random Array 1: " << deserial->s1 << std::endl << 
		"Random Integer: " << deserial->n << std::endl << 
		"Random Array 2: " << deserial->s2 << std::endl;

	delete deserial;

	return (0);
}