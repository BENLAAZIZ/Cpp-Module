/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:30:52 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/15 22:40:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private :
            std::string name;
            
    public :
            Zombie();
            Zombie(std::string _name);
            ~Zombie();
    void    announce( void ); 
};
Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif