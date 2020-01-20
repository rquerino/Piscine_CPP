/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:07:13 by rquerino          #+#    #+#             */
/*   Updated: 2020/01/20 15:08:40 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

// void    test1() {
//     try {
//         // Do some stuff here
//         if (/* There's an error */) {
//             throw std::exception();
//         } else {
//             // Do some more stuff
//         }
//     } catch (std::exception e) {
//         // Handle error here
//     }

// }

// void    test2() {
//     try {
//         // Do some stuff here
//         if (/* There's an error */) {
//             throw std::exception();
//         } else {
//             // Do some more stuff
//         }
// }

// void    test3() {
//     try {
//         test2();
//     } catch (std::exception& e) {
//         // Handle error
//     }
// }


// void    test4() {
//     class PEBKACException : public std::exception
//     {
//         public:
//             virtual const char* what() const throw()
//             {
//                 return ("Problem existis between keyboard and chair")
//             }
//     };

//     try
//     {
//         test3();
//     }
//     catch (PEBKACexception& e)
//     {
//         // Handle other exceptions tht are like std::exception
//     }
// }