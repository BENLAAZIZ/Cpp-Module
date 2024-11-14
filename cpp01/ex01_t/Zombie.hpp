/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:15:37 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/14 21:35:56 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    private :
            std::string name;
    public :
            Zombie();
            Zombie(std::string _name);
            ~Zombie();
            void announce();
            void set_name(std::string name);
            
};
Zombie* zombieHorde( int N, std::string name );

#endif