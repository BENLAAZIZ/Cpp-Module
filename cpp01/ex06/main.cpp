/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:20:41 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/18 01:33:24 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{

    Harl harl;
    std::string str;
    std::cout<<"enter one of : < DEBUG, INFO, WARNING, ERROR > :";
    
    std::getline(std::cin, str);
    if (std::cin.eof())
        return 1;
    // if (str != "DEBUG" && str != "INFO" && str != "WARNING" && str != "ERROR")
    //     std::cout<<"invalid input !!"<<std::endl;
    else
        harl.complain(str);
    return 0;
}   