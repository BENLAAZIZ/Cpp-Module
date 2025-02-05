/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:43:01 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/23 17:15:09 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    _index = 0;
    flag_index = 0;
}

int Phonebook::check_input(std::string title, int flag, Contact& contact)
{
     std::string	cmd;
     int			i = 0;
     int			alpha = 0;

     
    std::cout << title;
    if (my_getline(cmd))
        return (0);
    if(cmd.empty())
    {
        std::cout<<"invalid input !"<<std::endl;
        return (0);
    }
    while (i < (int)cmd.length())
    {
        if (cmd[i] != '\t' && cmd[i] != ' ')
            alpha++;
        i++;
    }
    if (alpha == 0)
    {
        std::cout<<"invalid input !"<<std::endl;
        return (0);
    }
    if (flag == 1)
        contact.set_first_name(cmd);
    if (flag == 2)
        contact.set_last_name(cmd);
    if (flag == 3)
        contact.set_nick_name(cmd);
    if (flag == 4)
        contact.set_phone_num(cmd);
    if (flag == 5)
        contact.set_secret(cmd);
    return (1);
}

void    Phonebook::add()
{
    std::string cmd;
    Contact contact;
    int check = 0;

    if (_index >= 8)
    {
        _index = _index % 8;
        this->flag_index = 8;
    }
    std::cout<<"-------- contact : " << _index << " -------- " << std::endl;
    if (check_input("first name     : ", 1, contact) &&
        check_input("last name      : ", 2, contact) &&
        check_input("nick name      : ", 3, contact) &&
        check_input("phone number   : ", 4, contact) &&
        check_input("darkest secret : ", 5, contact))
        check = 1;
    if (check == 1)
    {
        contacts[_index] = contact;
        std::cout << "contact added successfully !" << std::endl;
        _index++;  
    }
}

void    put_string(std::string s, int end)
{
    std::string c;
    int i = 0;
    
    while (i < (int)s.length())
    {
        if (s[i] == '\t')
            s[i] = ' ';
        i++;
    }
    if (s.length() == 10)
        std::cout << s;
    else if (s.length() > 10)
    {
        c = s.substr(0, 9);
        std::cout << c << ".";
    }
    else
        std::cout << std::setw(10) << s;
    if (end == 1)
        std::cout << std::endl;
    else
        std::cout << "|";
}

int Phonebook::display_contact(int flag, int index)
{
    int i;
    int end;
    int f = 0;

    i = 0;
    if (this->flag_index > 0)
        end = this->flag_index;
    else
        end = this->_index;
    while (i < end)
    {
        f++;
        if (i == index && flag == 1) {
            std::cout << "First name    : " << contacts[i].get_first_name() << std::endl;
            std::cout << "Last name     : " << contacts[i].get_last_name() << std::endl;
            std::cout << "Nick name     : " << contacts[i].get_nick_name() << std::endl;
            std::cout << "Phone numbere : " << contacts[i].get_phone_num() << std::endl;
            std::cout << "Dark secret   : " << contacts[i].get_secret() << std::endl;
            return f;
        }
        else if (!flag) {
            std::cout << std::setw(10) << i << "|";
            put_string(contacts[i].get_first_name(), 0);
            put_string(contacts[i].get_last_name(), 0);
            put_string(contacts[i].get_nick_name(), 1);
        }
        i++;
    }
    if (f != 0)
        return 1;
    return 0;
} 

void	Phonebook::search()
{
	std::string	cmd;
	int			index;

    if (contacts[0].get_secret().empty())
        std::cout << "nothing found !" << std::endl;
    else 
	{
        if (display_contact(0, -1) == 0)
            return ;
        std::cout << "enter index : ";
        my_getline(cmd);
        if (cmd.length() > 1 || !std::isdigit(cmd.front()))
            std::cout << "index out of range : " << "0 <= index < 8" << std::endl;
        else 
		{
            index = cmd.front() - '0';
            if (index >= 8)
            {
                std::cout << "index out of range : " << "0 <= index < 8" << std::endl;
                return ;
            }
            if (index >= this->_index && index > this->flag_index)
            {
                std::cout << "contact[" << index << "] not exits !!" << std::endl;
                return ;
            }
            display_contact(1, index);
        }
    }
}
