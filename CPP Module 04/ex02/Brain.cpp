/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:44:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 01:44:52 by hben-laz         ###   ########.fr       */
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
	std::cout << "Brain copy assignment operator called." << std::endl;
	return *this;
}

std::string Brain::get_idea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "Invalid index";
}

void Brain::set_idea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
