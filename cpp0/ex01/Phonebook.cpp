/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/12 00:36:22 by hben-laz         ###   ########.fr       */
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
    my_getline(cmd);
    contacts[i].set_first_name(cmd);
    if(contacts[i].get_first_name().empty())
        return ;
    std::cout<<std::endl<<"last name : ";
    my_getline(cmd);
    contacts[i].set_last_name(cmd);
    std::cout<<std::endl<<"nickname : ";
    my_getline(cmd);
    contacts[i].set_nick_name(cmd);
    std::cout<<std::endl<<"phone number : ";
    my_getline(cmd);
    contacts[i].set_phone_num(cmd);
     std::cout<<std::endl<<"darkest secret : ";
    my_getline(cmd);
    contacts[i].set_secret(cmd);
     this->i++;
}

void get_string(std::string s, int end)
{
    std::string c;
    

     if (s.length() == 10)
        std::cout << s;
     if (s.length() > 10)
     {
        c = s.substr(0, 9);
        std::cout << c <<".";
     }
     else
        std::cout << std::setw(10)<< s;
     if (end == 1)
        std::cout<<std::endl;
    else
        std::cout << "|";
}

void   Phonebook::desplay_contact(int flag, int index)
{
    int i;

    i = 0;
    while (i < this->i)
    {
        if (i == index && flag) {
            std::cout << "First name  : " << contacts[i].get_first_name() << std::endl;
            std::cout << "Last name   : " << contacts[i].get_last_name() << std::endl;
            std::cout << "Nick name   : " << contacts[i].get_nick_name() << std::endl;
            std::cout << "Phonenumber : " << contacts[i].get_phone_num() << std::endl;
            std::cout << "Dark secret : " << contacts[i].get_secret() << std::endl;
            return ;
        }
        else if (!flag) {
            std::cout <<std::setw(10)<< i <<"|";
            get_string(contacts[i].get_first_name(), 0);
            get_string(contacts[i].get_last_name(), 0);
            get_string(contacts[i].get_nick_name(), 1);
        }
        i++;
    }
} 

void	Phonebook::search()
{
    std::string cmd;
    int _index;
    if (contacts[0].get_first_name().empty())
        std::cout<<"nothing found !"<<std::endl;
    else {
        int index;
        desplay_contact(0, -1);
        std::cout << "print index: ";
        my_getline(cmd);
        if (cmd.length() > 1 || !std::isdigit(cmd.front()))
            std::cout << "index out of range." << cmd << std::endl;
        else {
            index = cmd.front() - '0';
            desplay_contact(1, index);
        }
    }
}