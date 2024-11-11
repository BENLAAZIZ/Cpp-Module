/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/11 22:53:19 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->i = 0;
}


Contact	Phonebook::get_contact()
{
    return (contacts[i]);
}

void    Phonebook::set_contact(int index, Contact contact)
{
    contacts[index] = contact;
}





//****************************************************

void Phonebook::add()
{
    std::string cmd;
    std::cout<<"i = "<<i<<std::endl;
    if (this->i >= 8)
        this->i = this->i % 8;
    std::cout<<"i = "<<i<<std::endl;
    std::cout<<"contact : "<<i<<std::endl;
    std::cout<<"first name : ";
    my_getline(&cmd);
    contacts[i].set_first_name(cmd);
    std::cout<<std::endl<<"last name : ";
    my_getline(&cmd);
    contacts[i].set_last_name(cmd);
    std::cout<<std::endl<<"nickname : ";
    my_getline(&cmd);
    contacts[i].set_nick_name(cmd);
    std::cout<<std::endl<<"phone number : ";
    my_getline(&cmd);
    contacts[i].set_phone_num(cmd);
     std::cout<<std::endl<<"darkest secret : ";
    my_getline(&cmd);
    contacts[i].set_secret(cmd);

    //************** afich

    //  std::cout<<"===================="<<std::endl;
    
    // std::cout<<"first name : "<<contacts[i].get_first_name()<<std::endl;
    // std::cout<<"last name : "<<contacts[i].get_last_name()<<std::endl;
    // std::cout<<"nike name : "<<contacts[i].get_nick_name()<<std::endl;
    // std::cout<<"phon number : "<<contacts[i].get_phone_num()<<std::endl;
    // std::cout<<"secret dark : "<<contacts[i].get_secret()<<std::endl;

    //  std::cout<<"********************"<<std::endl;
     
    //     std::cout<<std::setw(10)<<i<<"|";
    //     std::cout<<std::setw(10)<<contacts[i].get_first_name()<<"|";
    //     std::cout<<std::setw(10)<<contacts[i].get_last_name()<<"|";
    //     std::cout<<std::setw(10)<<contacts[i].get_nick_name()<<"|";
    //     std::cout<<std::setw(10)<<contacts[i].get_secret();
    //  std::cout<<"*********************"<<std::endl;
     
     this->i++;
    //  std::cout<<" incriment i = "<<i<<std::endl;
     
    
}

std::string get_string(std::string s)
{
    std::string c;
     if (s.length() > 10)
     {
        c = s.substr(0, 9);
        return c; 
     }
     return s;  
}

void   Phonebook::desplay_contact(int index)
{
    int i;

    i = 0;
    
    while (i <= index)
    {
        std::cout << std::setw(10) <<i << "|";
        if (contacts[i].get_first_name().length() > 10)
            std::cout << std::setw(10) <<contacts[i].get_first_name().substr(0, 9) << ".|";
        else  
            std::cout << std::setw(10) <<contacts[i].get_first_name() << "|";
            
        if (contacts[i].get_last_name().length() > 10)
            std::cout << std::setw(10) <<contacts[i].get_last_name().substr(0, 9) << ".|";
        else  
            std::cout << std::setw(10) <<contacts[i].get_last_name() << "|";
            
        if (contacts[i].get_nick_name().length() > 10)
            std::cout << std::setw(10) <<contacts[i].get_nick_name().substr(0, 9) << ".|";
        else  
            std::cout << std::setw(10) <<contacts[i].get_nick_name() << "|";

        if (contacts[i].get_phone_num().length() > 10)
            std::cout << std::setw(10) <<contacts[i].get_phone_num().substr(0, 9) << ".|";
        else  
            std::cout << std::setw(10) <<contacts[i].get_phone_num() << "|";


        if (contacts[i].get_secret().length() > 10)
            std::cout << std::setw(10) <<contacts[i].get_secret().substr(0, 9);
        else  
            std::cout << std::setw(10) <<contacts[i].get_secret() <<std::endl;
        i++;
    }
} 

void	Phonebook::search()
{
    int _index;
    if (contacts[0].get_first_name().empty())
        std::cout<<"nothing found !"<<std::endl;
    else
    {
        std::cout<<"enter index : ";
        std::cin>>_index;
            desplay_contact(_index);
        // std::cout<<std::setw(10)<<i<<"|";
        
    }
        
    
}