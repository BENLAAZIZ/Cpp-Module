/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:33:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/28 18:23:00 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Dog{//base class

    public :
        Dog(){}
            
        void Brak(){
            std::cout<<"Brak!"<<std::endl;
        }
        
        void Walk()
        {
            x+= 1;
            y+= 1;
        }

        float x,y;
        
};




class Golden : public Dog{
    
    
};

int main()
{

    Golden dog1;
    dog1.Brak();


    return 0;
    
}