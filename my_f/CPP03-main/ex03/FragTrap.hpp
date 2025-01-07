/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:46:53 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 21:59:36 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();  
        FragTrap(const std::string& name);  
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& rhs);  
        ~FragTrap(); 
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif