/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:40:03 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/13 18:02:24 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include "Array.hpp"
#include <string>

int main()
{
    std::cout << "------- integer array:" << std::endl;
    try {
        Array<int> a;
        std::cout << "Size of a: " << a.size() << std::endl;

        // Array of 5 integers
        Array<int> b(5);
        for (unsigned int i = 0; i < b.size(); ++i)
            b[i] = i * 10;

        // Copy constructor
        Array<int> c(b);
        c[2] = 4444;

        // Assignment operator
        Array<int> d;
        d = c;

        // Print
        std::cout << "Array b: ";
        for (unsigned int i = 0; i < b.size(); ++i)
            std::cout << b[i] << " ";
        std::cout << "\nArray c: ";
        for (unsigned int i = 0; i < c.size(); ++i)
            std::cout << c[i] << " ";
        std::cout << "\nArray d: ";
        for (unsigned int i = 0; i < d.size(); ++i)
            std::cout << d[i] << " ";
        std::cout << std::endl;

        // Out of bounds
        std::cout << "Trying out-of-bounds access...\n";
        std::cout << b[8];
    }
    catch (std::exception &e) {
        std::cerr << "find exception: " << e.what() << std::endl;
    }
    
std::cout << "------- char array:" << std::endl;
    try {
        Array<char> a;
        std::cout << "Size of a: " << a.size() << std::endl;

        Array<char> b(5);
        for (unsigned int i = 0; i < b.size(); ++i)
            b[i] = i + 65;
            
        Array<char> c(b);
        c[2] = 'Z';

        Array<char> d;
        d = c;

        std::cout << "Array b: ";
        for (unsigned int i = 0; i < b.size(); ++i)
            std::cout << b[i] << " ";
        std::cout << "\nArray c: ";
        for (unsigned int i = 0; i < c.size(); ++i)
            std::cout << c[i] << " ";
        std::cout << "\nArray d: ";
        for (unsigned int i = 0; i < d.size(); ++i)
            std::cout << d[i] << " ";
        std::cout << std::endl;

        std::cout << "Trying out-of-bounds access...\n";
        std::cout << b[8];
    }
    catch (std::exception &e) {
        std::cerr << "find exception: " << e.what() << std::endl;
    }

    return 0;
}
