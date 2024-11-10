/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/10 21:51:33 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"



Contact	Phonebook::get_contact()
{
    return (contacts[i]);
}

void    Phonebook::set_contact(int index, Contact contact)
{
    contacts[index] = contact;
}





//****************************************************

std::string	get_first_name()
{
    return (firs_name);
}