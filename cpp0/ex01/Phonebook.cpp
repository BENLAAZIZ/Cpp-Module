/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/12 01:49:47 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    _index = 0;
    flag_index = 0;
    
}


Contact	Phonebook::get_contact()
{
    return (contacts[_index]);
}

void    Phonebook::set_contact(int index, Contact contact)
{
    contacts[index] = contact;
}



// int check_(std::string title, int index ,  std::string name)
// {
//      std::string cmd;
//      int i = 0;
     
//      std::cout<<title;
//     my_getline(cmd);
//     if(cmd.empty())
//         return ;
//     while (i < cmd.length())
//         if (cmd)
//     contacts[_index].set_first_name(cmd);
// }

//****************************************************

void Phonebook::add()
{
    std::string cmd;
    std::cout<<"i = "<<_index<<std::endl;
    if (_index >= 8)
    {
        _index = _index % 8;
        this->flag_index = 8;
    }

    
    std::cout<<"i = "<<_index<<std::endl;
    std::cout<<"contact : "<<_index<<std::endl;
    
    std::cout<<"first name : ";
    my_getline(cmd);
    if(cmd.empty())
        return ;
    contacts[_index].set_first_name(cmd);
    
    std::cout<<"last name : ";
    my_getline(cmd);
    if (cmd.empty())
        return ;
    contacts[_index].set_last_name(cmd);
    
    std::cout<<"nickname : ";
    my_getline(cmd);
    if (cmd.empty())
        return ;
    contacts[_index].set_nick_name(cmd);
    
    std::cout<<"phone number : ";
    my_getline(cmd);
    if (cmd.empty())
        return ;
    contacts[_index].set_phone_num(cmd);
    
     std::cout<<"darkest secret : ";
    my_getline(cmd);
    if (cmd.empty())
        return ;
    contacts[_index].set_secret(cmd);
    
     _index++;
}

void put_string(std::string s, int end)
{
    std::string c;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '\t')
            s[i] = ' ';
        i++;
    }
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
    int end;

    i = 0;
    if (flag_index)
        end = flag_index;
    else
        end = _index;
    while (i < end)
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
            put_string(contacts[i].get_first_name(), 0);
            put_string(contacts[i].get_last_name(), 0);
            put_string(contacts[i].get_nick_name(), 1);
        }
        i++;
    }
} 

void	Phonebook::search()
{
    std::string cmd;

    if (contacts[0].get_first_name().empty())
        std::cout<<"nothing found !"<<std::endl;
    else {
        int index;
        desplay_contact(0, -1);
        std::cout << "print index : ";
        my_getline(cmd);
        if (cmd.length() > 1 || !std::isdigit(cmd.front()))
            std::cout << "index out of range." << cmd << std::endl;
        else {
            index = cmd.front() - '0';
            if (index >= 8 || index > _index)
            {
                std::cout << "contact[" <<index<<"] not exits !!" << std::endl;
                return ;
            }
            desplay_contact(1, index);
        }
    }
}