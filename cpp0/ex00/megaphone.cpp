/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:35:57 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/02 23:35:57 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    int i, j;

    i = 1;
    j = 0;
    if (ac > 1)
    {
        while (av[i])
        {
            while (av[i][j])
            {
                // cout << (char)toupper(av[i][j]);
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] =  av[i][j] - 32;
                cout << av[i][j];
                j++;
            }
            i++;
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}
