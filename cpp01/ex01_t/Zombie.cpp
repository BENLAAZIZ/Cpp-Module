/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:17:35 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/14 21:37:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<<"zombie : "<<name<<"is die"<<std::endl;
}


void Zombie::announce()
{
    std::cout<<name<<"is caled"<<std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}