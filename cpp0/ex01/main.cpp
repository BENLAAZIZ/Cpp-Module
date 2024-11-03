/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:40 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/02 23:35:40 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

using namespace std;

int	main(void)
{
    Phonebook	phonebook;
    string		cmd;

    while (1)
    {
        cout << "Enter a command: ";
        getline(cin, cmd);
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
        else
            cout << "Invalid command" << endl;
    }
    return (0);
}