/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:44:43 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 12:22:38 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("player");
	
	std::cout <<"***********************" << std::endl;
	clap.attack("target1");
	clap.takeDamage(5);
	clap.beRepaired(2);
	std::cout <<"\n**********************" << std::endl; 
	clap.attack("target2");
	clap.takeDamage(10);
	clap.beRepaired(3);
	std::cout <<"\n**********************" << std::endl;
	clap.attack("target3");

	return 0;
}