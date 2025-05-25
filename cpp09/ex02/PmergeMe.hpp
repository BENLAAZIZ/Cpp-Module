/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:01:24 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 15:59:10 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private :
        std::vector<int> vec;
        std::deque<int> deq;
        int save_last;
        
    public :
            PmergeMe();
            PmergeMe(const PmergeMe& obj);
            PmergeMe&  operator=(const PmergeMe& obj);
            ~PmergeMe();
    
            void set_vector(char **av);
            void set_deque(char **av);
};

void check_parse(char **av);