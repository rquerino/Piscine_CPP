/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:00:07 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/23 16:43:13 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *arrayAddress, int length, void (*function)(T &)) {
	for (int i = 0; i < length; i++)
		function(arrayAddress[i]);
}

template <typename T>
void	multiplyBy5(T & item) {
    item = item * 5;
}

template <typename T>
void	print(T & item) {
	std::cout << item << std::endl;
}

int	main()
{
    int test1[] = {10, 20, 30, 40, 50, 60};
    std::cout << "Applying iter to a print function:" << std::endl;
    iter<int>(test1, 6, print);
    std::cout << std::endl;
    std::cout << "Applying iter to a multiplyBy5 function and then print again:" << std::endl;
	iter<int>(test1, 6, multiplyBy5);
    iter<int>(test1, 6, print);
	return (0);
}
