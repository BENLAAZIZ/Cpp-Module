/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:40 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/02 23:35:40 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#include <iostream>
#include <string>
void ff(std::string cmd, Contact &c) {
    std::getline(std::cin, cmd);
    if (std::cin.eof())
        std::exit(1);
    c.setName(cmd);
}
int	main(void)
{
    Phonebook	phonebook;
    Contact     c;
    std::string		cmd;

    while (1)
    {
        
        std::cout << "Enter a command: ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            break ;
        std::cout << cmd << std::endl;
        if (cmd == "EXIT")
            break ;
        if (cmd == "ADD")
        {
    
            phonebook.add();
        }
    }
    return (0);
}