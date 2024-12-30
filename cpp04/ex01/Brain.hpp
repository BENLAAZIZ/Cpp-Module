/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:41:29 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:43:15 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class  Brain
{
    private :
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};

#endif