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

void my_getline(std::string& cmd) 
{
    std::getline(std::cin, cmd);
    if (std::cin.eof())
        std::exit(1);
}

int	main(void)
{
    Phonebook   phonebook;
    Contact     c;
    std::string cmd;
    int index;

    while (1)
    {
        
        std::cout << "Enter a command: ";
        my_getline(cmd); 
        if (cmd == "EXIT")
        {
            std::cout<<"exit her";
            break ;
        }
        else if (cmd == "ADD")
        {
            std::cout<<"add"<<std::endl;
            phonebook.add();
        }
        else if (cmd == "SEARCH")
            phonebook.search();
        else
            std::cout << "this command: "<<cmd<<" not valid !!"<<std::endl;
    }
    return (0);
}

