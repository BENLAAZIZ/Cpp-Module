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

class	Phonebook
{
	private:
		Contact	contacts[8];
		int		_index;
		int		flag_index;
	public:
		Phonebook();
		/* Getters */
		Contact	get_contact();
        /* Setters */
        void	set_contact(int index, Contact contact);
		// method
		void	add(void);
		void	search(void);
		void   display_contact(int flag, int index);
		int check_input(std::string title, int index, int flag);
};
void my_getline(std::string& cmd);
void put_string(std::string s, int end);

#endif