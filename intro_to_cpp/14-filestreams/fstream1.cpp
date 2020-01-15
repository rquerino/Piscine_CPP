/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:03:10 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/14 23:06:06 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main() {
    std::ifstream   ifs("numbers");
    unsigned int    dst;
    unsigned int    dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();

    //--------------

    std::ofstream   ofs("test.out");

    ofs << "I like ponies a whole damn lot" << std::endl;
    ofs.close();

    return 0;
}