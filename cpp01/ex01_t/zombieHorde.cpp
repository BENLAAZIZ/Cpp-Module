/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:17:47 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/14 21:36:31 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{

    if (N <= 0)
        return NULL;
    Zombie *z = new Zombie[N];
    for(int i = 0; i < N ; i++)
        z[i].set_name(name);
    return z;
}