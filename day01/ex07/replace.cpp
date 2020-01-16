/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:08:55 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/15 20:08:17 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// receive file, string1 and string2
// Open file, write the contents in "filename".replace after replacing s1 with s2.
// Handle errors
// Don't use C functions

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc == 4) {
        std::fstream    fs;
        std::string     tmp;
        std::string     filename = argv[1];
        std::string     s1 = argv[2];
        std::string     s2 = argv[3];

        fs.open(argv[1], std::fstream::in); // open(file, input)
        std::ofstream    outFile(filename + ".replace");
        while (!fs.eof()) {
            getline(fs, tmp);
            while (tmp.find(s1) != std::string::npos)
                tmp.replace(tmp.find(s1), sizeof(s1), s2);
            outFile << tmp;
            outFile << '\n';
        }
        fs.close();
        outFile.close();
    } else {
        std::cout << "Please enter 3 valid parameters." << std::endl;
        std::cout<< "Usage: ./replace file string1 string2" << std::endl;
    }
    return 0;
}
