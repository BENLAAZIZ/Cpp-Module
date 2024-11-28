/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:33:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/29 00:30:31 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base{//base class

    protected :
        Base(){
            std::cout<<"Base constructor!"<<std::endl;
        }
            
        ~Base(){
            std::cout<<"Base Destructor!"<<std::endl;
        }

        protected :
                int my_public;
         protected :
                int my_protected;
         protected :
                int my_private;
};


class Derived : protected Base{
    
    public :
        Derived(){
            std::cout<<"Derived constructor!"<<std::endl;
                my_public = 123;
                my_protected = 1;
              //   my_private = 11111;
        }

        void sum()
        {
            std::cout<<"sum = "<<my_protected + my_public<<std::endl;
        }
            
        ~Derived(){
            std::cout<<"Derived Destructor!"<<std::endl;
        }
        
};

int main()
{

    Derived d;

    d.sum();
// std::cout<<"Dmy_protected = "<< d.my_pr<<  std::endl;


    return 0;
    
}