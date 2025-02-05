/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:39:27 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 19:39:29 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::get_first_name()
{
    return (firs_name);
}

std::string	Contact::get_last_name()
{
    return (last_name);
}

std::string	Contact::get_nick_name()
{
    return (nick_name);
}

std::string	Contact::get_phone_num()
{
    return (phone_num);
}

std::string	Contact::get_secret()
{
    return (secret);
}

void    Contact::set_first_name(std::string first_name)
{
    this->firs_name = first_name;
}

void   Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void    Contact::set_nick_name(std::string nick_name)
{
    this->nick_name = nick_name;
}

void    Contact::set_phone_num(std::string phone_num)
{
    this->phone_num = phone_num;
}

void    Contact::set_secret(std::string secret)
{
    this->secret = secret;
}
