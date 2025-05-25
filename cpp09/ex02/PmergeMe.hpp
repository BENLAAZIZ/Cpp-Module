/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:01:24 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 16:45:57 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    public :
        std::vector<int> vec;
        std::deque<int> deq;
        int save_last;
        bool has_pair;
        
    public :
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& obj);
        PmergeMe&  operator=(const PmergeMe& obj);
        ~PmergeMe();

        void get_elements(char **av);
        void process_sort_vector();
};

void check_parse(char **av);