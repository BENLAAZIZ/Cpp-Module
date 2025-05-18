/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:12:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/15 15:15:47 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"Hello", "World", "!"};
    double arrD[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "------- Integer array:" << std::endl;
    iter(arr, 5, print<const int>);
    std::cout << std::endl;
    
    std::cout << "------- String array:" << std::endl;
    iter(strArr, 3, print);
    std::cout << std::endl;

    std::cout << "------- Double array:" << std::endl;
    iter(arrD, 5, print);


    return 0;
}

