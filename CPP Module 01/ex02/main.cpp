/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:22:37 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 15:59:23 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = str;
    
    stringPTR = &str;

    std::cout<<"--- memory address --"<<std::endl;

    std::cout<<"The memory address of the string variable :"<<&str<<std::endl;
    std::cout<<"The memory address held by stringPTR      :"<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF      :"<<&stringREF<<std::endl;

    std::cout<<"--- The value of the string --"<<std::endl;
    
    std::cout<<"The value of the string variable   : "<<str<<std::endl;
    std::cout<<"The value pointed to by stringPTR  : "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF  : "<<stringREF<<std::endl;
}
