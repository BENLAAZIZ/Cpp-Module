/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:33:49 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/01 01:07:20 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

#include "FragTrap.hpp"


int main() {
    // Create a FragTrap object
    FragTrap frag("Fraggie");

    // Show its unique behavior
    frag.highFivesGuys();

    // Copy constructor
    FragTrap fragCopy(frag);

    // Copy assignment
    FragTrap fragAssign("Placeholder");
    fragAssign = frag;

    return 0; // Observe destruction order
}