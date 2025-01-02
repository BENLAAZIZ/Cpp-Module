/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:41:21 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 00:24:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
        ideas[i] = "Empty";
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain& obj)
{
	for(int i=0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for(int i=0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}

std::string Brain::get_idea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "Invalid index";
}

// Set a specific idea
void Brain::set_idea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
