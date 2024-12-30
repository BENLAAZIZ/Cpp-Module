/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:39:43 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 19:39:43 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int my_getline(std::string& cmd) 
{
	std::getline(std::cin, cmd);
	if (std::cin.eof())
		return (1);
	return (0);
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	cmd;

	while (1)
	{
		if (std::cin.eof())
			return (1);
		std::cout << "Enter a command: ";
		if (my_getline(cmd))
			break ;
		if (cmd.empty())
			continue ;
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid command !!"<<std::endl;
	}
	return (0);
}
