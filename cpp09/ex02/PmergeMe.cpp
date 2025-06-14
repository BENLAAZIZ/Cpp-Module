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
		this->vec_time = obj.vec_time;
        this->deq_time = obj.deq_time;
        this->has_pair = obj.has_pair;
	}
}

PmergeMe&  PmergeMe::operator=(const PmergeMe& obj)
{
	 if(this != &obj)
	{
		this->vec = obj.vec;
		this->deq = obj.deq;
		this->save_last = obj.save_last;
		this->vec_time = obj.vec_time;
        this->deq_time = obj.deq_time;
        this->has_pair = obj.has_pair;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
	
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
		if (atol(av[i]) > 2147483647)
			 throw std::runtime_error("Error: number too large!");
		i++;
	}
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
}

void mergeVector(std::vector<int>& mainChain, int left, int mid, int right) {
	std::vector<int> temp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right) {
		if (mainChain[i] < mainChain[j])
			temp.push_back(mainChain[i++]);
		else
			temp.push_back(mainChain[j++]);
	}

	while (i <= mid)
		temp.push_back(mainChain[i++]);

	while (j <= right)
		temp.push_back(mainChain[j++]);

	for (size_t k = 0; k < temp.size(); ++k)
		mainChain[left + k] = temp[k];
}

void mergeSort_vector(std::vector<int>& mainChain, int left, int right) {
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	mergeSort_vector(mainChain, left, mid);
	mergeSort_vector(mainChain, mid + 1, right);
	mergeVector(mainChain, left, mid, right);
}

void PmergeMe::process_sort_vector()
{
	struct timeval start, end;
    gettimeofday(&start, NULL);

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
		mainChain.push_back(pair_vec[i].first);
		pending.push_back(pair_vec[i].second);
	}
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
	
	gettimeofday(&end, NULL);
    
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    this->vec_time = seconds * 1000000.0 + microseconds;
}

void mergeDeque(std::deque<int>& mainChain, int left, int mid, int right) {
	std::deque<int> temp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right) {
		if (mainChain[i] < mainChain[j])
			temp.push_back(mainChain[i++]);
		else
			temp.push_back(mainChain[j++]);
	}

	while (i <= mid)
		temp.push_back(mainChain[i++]);

	while (j <= right)
		temp.push_back(mainChain[j++]);

	for (size_t k = 0; k < temp.size(); ++k)
		mainChain[left + k] = temp[k];
}

void mergeSort_deque(std::deque<int>& mainChain, int left, int right) {
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	mergeSort_deque(mainChain, left, mid);
	mergeSort_deque(mainChain, mid + 1, right);
	mergeDeque(mainChain, left, mid, right);
}

void PmergeMe::process_sort_deque()
{
	struct timeval start, end;
    gettimeofday(&start, NULL);
	has_pair = false;
	if (deq.size() % 2 == 1)
	{
		save_last = deq.back();
		deq.pop_back();
		has_pair = true;
	}

	std::deque<std::pair<int, int> > pair_deq;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		int first = vec[i];
		int second = vec[i + 1];
		if (first > second)
			std::swap(first, second);
		pair_deq.push_back(std::make_pair(first, second));
	}
	std::deque<int> mainChain;
	std::deque<int> pending;
	for (size_t i = 0; i < pair_deq.size(); ++i)
	{
		mainChain.push_back(pair_deq[i].first);  // min
		pending.push_back(pair_deq[i].second);   // max
	}
	mergeSort_deque(mainChain, 0, static_cast<int>(mainChain.size()) - 1);
	for (size_t i = 0; i < pending.size(); ++i)
	{
		std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pending[i]);
		mainChain.insert(pos, pending[i]);
	}
	if (has_pair)
	{
		std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), save_last);
		mainChain.insert(pos, save_last);
	}
		
	deq = mainChain;
	
	gettimeofday(&end, NULL);
    
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    this->deq_time = seconds * 1000000.0 + microseconds;
}

void PmergeMe::print_sorted_numer(std::string str)
{
	std::cout << str;
	for (size_t i = 0; i < vec.size(); ++i)
	std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::print_time_to_process(std::string str)
{
	int n;
	double time;
	if(str == "vector")
	{
		n = static_cast<int>(vec.size());
		time = this->vec_time;
	}
	else
	{
		n = static_cast<int>(deq.size());
		time = this->deq_time;
	}

	std::cout << "Time to process a range of " << n 
		 << " elements with std::[" << str << "] : " 
		 << std::fixed << std::setprecision(5) 
		 << time << " us" << std::endl;
}

void PmergeMe::process_sort()
{
	print_sorted_numer("Before: ");

	process_sort_vector();
	process_sort_deque();

	print_sorted_numer("After:  ");

	print_time_to_process("vector");
	print_time_to_process("deque");
}
