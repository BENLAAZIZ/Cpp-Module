/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 13:02:19 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/25 17:47:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(char **av)
{
	has_pair = false;
	get_elements(av); 
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

void PmergeMe::get_elements(char **av)
{
	int i = 1;
	while(av[i])
	{
		vec.push_back(atoi(av[i]));
		deq.push_back(atoi(av[i]));
		i++;
	}

	// i = 1;
	// while(av[i])
	// {
	// 	deq.push_back(atoi(av[i]));
	// 	i++;
	// }
}


//---------------------------------------------


void mergeVector(std::vector<int>& vec, int left, int mid, int right) {
	std::vector<int> temp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right) {
		if (vec[i] < vec[j])
			temp.push_back(vec[i++]);
		else
			temp.push_back(vec[j++]);
	}

	while (i <= mid)
		temp.push_back(vec[i++]);

	while (j <= right)
		temp.push_back(vec[j++]);

	for (size_t k = 0; k < temp.size(); ++k)
		vec[left + k] = temp[k];
}



void mergeSort_vector(std::vector<int>& vec, int left, int right) {
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	mergeSort_vector(vec, left, mid);
	mergeSort_vector(vec, mid + 1, right);
	mergeVector(vec, left, mid, right);
}



//-----------------------------------------------






void PmergeMe::process_sort_vector()
{

	 if (vec.size() % 2 == 1)
	{
		save_last = vec.back();
		vec.pop_back();
		has_pair = true;
	}

	std::vector<std::pair<int, int> > pair_vec;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		int first = vec[i];
		int second = vec[i + 1];
		if (first > second)
			std::swap(first, second);
		pair_vec.push_back(std::make_pair(first, second));
	}

	std::vector<int> mainChain;
	std::vector<int> pending;

	for (size_t i = 0; i < pair_vec.size(); ++i)
	{
		mainChain.push_back(pair_vec[i].first);  // min
		pending.push_back(pair_vec[i].second);   // max
	}
	// ----------------------

	mergeSort_vector(mainChain, 0, static_cast<int>(mainChain.size()) - 1);

	for (size_t i = 0; i < pending.size(); ++i)
	{
		std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pending[i]);
		mainChain.insert(pos, pending[i]);
	}
	
	if (has_pair)
	{
		std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), save_last);
		mainChain.insert(pos, save_last);
	}
		
	vec = mainChain;
	
	std::cout << "Sorted vector: ";
	for (size_t i = 0; i < vec.size(); ++i)
	std::cout << vec[i] << " ";
	std::cout << std::endl;
	// ----------------------
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
