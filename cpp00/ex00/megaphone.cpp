/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:38:55 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 19:38:55 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    std::string str;

    i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            str = av[i];
            for (int j = 0; j < (int)str.size(); j++)
                std::cout << (char)toupper(str[j]);
            if (av[i + 1])
                std::cout << " ";
            i++;
        }  
        std::cout << std::endl;    
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}
