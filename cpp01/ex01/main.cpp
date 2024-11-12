/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:48:15 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/12 23:24:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // int n  = 5;
    // Zombie* zombie = zombieHorde(n, "Foo");
    // if (!zombie)
    //     return 1;
    // for (int i = 0; i < n; i++)
    //     zombie[i].announce();
    // delete[] zombie;

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str      : " << &str << std::endl;
    std::cout << "Address of stringPTR: "  << stringPTR<< std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
    
    std::cout << "Value of str        : " << str <<std::endl;
    std::cout << "Value of stringPTR  : " << *stringPTR<< std::endl;
    std::cout << "Value of stringREF  : " << stringREF<< std::endl;
    return 0;
}