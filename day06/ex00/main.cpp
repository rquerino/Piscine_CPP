/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:52:51 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/22 16:24:23 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <iomanip>

int canPrint(char c) {
    if (c >= 33 && c <= 126)
        return 1;
    else
        return 0;
}

int main(int argc, char* argv[]) {
    if (argc == 2) {
        // Create class with input
        Convert cv(argv[1]);

        // Fixating to 1 precision (.0)
        // https://en.cppreference.com/w/cpp/io/manip/setprecision
        // http://www.cplusplus.com/reference/ios/fixed/
        std::cout << std::fixed << std::setprecision(1); 
        
        // static_cast
        // https://en.cppreference.com/w/cpp/language/static_cast
        std::cout << "char: ";
        try {
            int c = static_cast<int>(cv);
            if (canPrint(c))
                std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        } catch (Convert::ErrorConvertingException & e) {
            std::cout << e.what() << std::endl;
        } catch (const std::exception & e){
            std::cout << "Unknown error" << std::endl;
        }

        std::cout << "int: ";
        try {
            std::cout << static_cast<int>(cv) << std::endl;
        } catch (Convert::ErrorConvertingException & e) {
            std::cout << e.what() << std::endl;
        } catch (const std::exception & e) {
            std::cout << "Unknown error" << std::endl;
        }

        std::cout << "float: ";
        try {
            std::cout << static_cast<float>(cv) << "f" << std::endl;
        } catch (Convert::ErrorConvertingException & e) {
            std::cout << e.what() << std::endl;
        } catch (const std::exception & e) {
            std::cout << "Unknown error" << std::endl;
        }

        std::cout << "double: ";
        try {
            std::cout << static_cast<double>(cv) << std::endl;
        } catch (Convert::ErrorConvertingException & e) {
            std::cout << e.what() << std::endl;
        } catch (const std::exception & e) {
            std::cout << "Unknown error" << std::endl;
        }
    } else
        std::cout << "Please enter one valid input" << std::endl;
    return 0;
}