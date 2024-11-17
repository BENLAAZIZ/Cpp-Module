/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:20:41 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/17 01:55:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{

    std::string str;
    std::cout<<"enter a command: ";
    
    std::getline(std::cin, str);
    if (std::cin.eof())
        return 1;
    std::cout<<str<<std::endl;
    
    return 0;
}   