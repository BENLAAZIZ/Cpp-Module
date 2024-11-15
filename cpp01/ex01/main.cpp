/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:48:15 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/15 22:57:12 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n  = 5;
    Zombie* zombie = zombieHorde(n, "Foo");
    if (!zombie)
        return 1;
    for (int i = 0; i < n; i++)
        zombie[i].announce();
    delete[] zombie;
    return 0;
}