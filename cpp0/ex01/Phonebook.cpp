/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/12 22:07:39 by hben-laz         ###   ########.fr       */
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

int Phonebook::check_input(std::string title, int index, int flag)
{
     std::string cmd;
     int i = 0;
     int alfa = 0;
     
     std::cout<<title;
    my_getline(cmd);
    if(cmd.empty())
        return (1);
    while (i < cmd.length())
    {
        if (cmd[i] != '\t' && cmd[i] != ' ')
            alfa++;
        i++;
    }
    if (alfa == 0)
    {
        std::cout<<"invalid input !"<<std::endl;
        return (1);
    }
    if (flag == 1)
        contacts[_index].set_first_name(cmd);
    if (flag == 2)
        contacts[_index].set_last_name(cmd);
    if (flag == 3)
        contacts[_index].set_nick_name(cmd);
    if (flag == 4)
        contacts[_index].set_phone_num(cmd);
    if (flag == 5)
        contacts[_index].set_secret(cmd);
    return (0);
}

void Phonebook::add()
{
    std::string cmd;

    if (_index >= 8)
    {
        _index = _index % 8;
        this->flag_index = 8;
    }
    std::cout<<"****** contact : "<<_index<<" ******"<<std::endl;
    if (check_input("first name : ", _index, 1))
        return ;
    if (check_input("last name : ", _index, 2))
        return ;
    if (check_input("nick name : ", _index, 3))
        return ;
    if (check_input("phone number : ", _index, 4))
        return ;
    if (check_input("darkest secret : ", _index, 5))
        return ;
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

void   Phonebook::display_contact(int flag, int index)
{
    int i;
    int end;

    i = 0;
    if (flag_index > 0)
        end = flag_index;
    else
        end = _index;
    while (i < end)
    {
        if (i == index && flag) {
            std::cout << "First name  : " << contacts[i].get_first_name() << std::endl;
            std::cout << "Last name   : " << contacts[i].get_last_name() << std::endl;
            std::cout << "Nick name   : " << contacts[i].get_nick_name() << std::endl;
            std::cout << "Phone numbere : " << contacts[i].get_phone_num() << std::endl;
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
        display_contact(0, -1);
        std::cout << "enter index : ";
        my_getline(cmd);
        if (cmd.length() > 1 || !std::isdigit(cmd.front()))
            std::cout << "index out of range : " << "0 <= index < 8" << std::endl;
        else {
            index = cmd.front() - '0';
            if (index >= 8)
            {
                std::cout << "index out of range : " << "0 <= index < 8" << std::endl;
                return ;
            }
            if (index >= _index)
            {
                std::cout << "contact[" <<index<<"] not exits !!" << std::endl;
                return ;
            }
            display_contact(1, index);
        }
    }
}
