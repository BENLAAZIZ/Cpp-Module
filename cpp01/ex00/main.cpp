/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:48:15 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 15:49:36 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("Foo");
    zombie->announce();

    randomChump("Walkers");
    delete zombie;
    return 0;
}