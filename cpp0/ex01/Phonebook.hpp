/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:40:48 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/10 23:40:48 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class	Phonebook
{
	private:
		Contact	contacts[8];
		int		i;
	public:
		Phonebook();
		/* Getters */
		Contact	get_contact();
        /* Setters */
        void	set_contact(int index, Contact contact);
		// method
		void	add(void);
		void	search(void);
		// void    desplay_contact();
		void   desplay_contact(int flag, int index);
};
void my_getline(std::string& cmd);
void get_string(std::string s, int end);

#endif