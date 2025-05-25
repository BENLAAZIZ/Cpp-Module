/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:02:19 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 15:59:19 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
    
}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
    if(this != &obj)
    {
        this->vec = obj.vec;
        this->deq = obj.deq;
        this->save_last = obj.save_last;
    }
}

PmergeMe&  PmergeMe::operator=(const PmergeMe& obj)
{
     if(this != &obj)
    {
        this->vec = obj.vec;
        this->deq = obj.deq;
        this->save_last = obj.save_last;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
    
}

void PmergeMe::set_vector(char **av)
{
    int i = 1;
    while(av[i])
    {
        vec.push_back(atoi(av[i]));
        i++;
    }
    // std::vector<int>::iterator end = vec.end();
    // for(std::vector<int>::iterator it = vec.begin(); end != it; ++it)
    //     std::cout << "vec : " << *it << std::endl;
}


void PmergeMe::set_deque(char **av)
{
    int i = 1;
    while(av[i])
    {
        deq.push_back(atoi(av[i]));
        i++;
    }
    std::deque<int>::iterator end = deq.end();
    for(std::deque<int>::iterator it = deq.begin(); end != it; ++it)
        std::cout << "deq : " << *it << std::endl;
}

void check_parse(char **av)
{
    int i = 1;
    while(av[i])
    {
        
        int j = 0;
        if (av[i][j] == '\0')
            throw std::runtime_error("Error: impty argument!");
        while(av[i][j])
        {
            if (av[i][j] == '-')
                throw std::runtime_error("Error");
            if (av[i][j] == '+')
            {
                if (j != 0)
                    throw std::runtime_error("Error");
                j++;
            }
            if (!isdigit(av[i][j]))
                 throw std::runtime_error("Error: invalid character!");
            j++;
        }
        // int nbr = atoi(av[i]);
        if (atol(av[i]) > 2147483647)
             throw std::runtime_error("Error: number too large!");
        // std::cout << nbr << std::endl;
        i++;
    }
}
