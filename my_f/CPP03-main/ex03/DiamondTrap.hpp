/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:10:32 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/03 13:08:19 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string name;
    public:
        DiamondTrap();  
        DiamondTrap(const std::string& name);  
        DiamondTrap(const DiamondTrap& copy);  
        DiamondTrap& operator=(const DiamondTrap& rhs);  
        ~DiamondTrap();  
        void attack(const std::string& target);
        void whoAmI();
};

#endif 