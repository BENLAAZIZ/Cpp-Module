/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:40:14 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 19:40:14 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <iomanip>

class	Phonebook
{
	private:
		Contact	contacts[8];
		int		_index;
		int		flag_index;
	public:
		Phonebook();
		void	add(void);
		void	search(void);
		int 	display_contact(int flag, int index);
		int		check_input(std::string title, int flag, Contact& contact);
};
int	my_getline(std::string& cmd);
void put_string(std::string s, int end);

#endif