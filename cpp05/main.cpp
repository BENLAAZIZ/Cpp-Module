/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:00:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/16 12:22:26 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

int _idex;

class cexception 
{
    int arr[10];
public:
    cexception()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = i;
        }
    }

    int getElement(int index)
    {
        if (index >= 10)
            throw xBig();
        else if (index < 0)
            throw xSmall();
        else
        return arr[index];
    }

     class xBig
     {
            int i;
            public:
                xBig()
                {
                    i = 0;
                }
                xBig(int n)
                {
                    i = n;
                }
                void big(int i)
                {
                    std::cout << "The element is too big : " << i << std::endl;
                }
        };
 
        class xSmall
        {
            int i;
            public:
                xSmall()
                {
                    i = 0;
                }
                xSmall(int n)
                {
                    i = n;
                }
            void small(int i)
            {
                std::cout << "The element is too small : " << i << std::endl;
            }    
        };
};

int main(int ac, char **av)
{
    int h = 0;
    cexception obj;
  

    try
    {
        std::cout << "Choise The elements : ";
        std::cin >> h;

        std::cout << "The element is : " << obj.getElement(h) << std::endl;
        
    }
    catch (cexception::xBig b)
    {

       b.big(h);
    }
    
    catch (cexception::xSmall s)
    {
        s.small(h);
    }
//    try {
//         if (ac != 2)
//             throw std::runtime_error("Invalid number of arguments. Please provide a filename."); 
//     }
//     catch (std::exception& e) {
//         std::cout << "An exception occurred. Exception Nr. " ;
//         e.what();
//    }
    return 0;
}