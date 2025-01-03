/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:41:29 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 00:24:45 by hben-laz         ###   ########.fr       */
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
        std::string get_idea(int index) const;
        void set_idea(int index, const std::string& idea);
};

#endif