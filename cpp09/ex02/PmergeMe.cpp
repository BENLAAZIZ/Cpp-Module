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

void PmergeMe::get_elements(char **av)
{
	int i = 1;
	while(av[i])
	{
		vec.push_back(std::atoi(av[i]));
		deq.push_back(std::atoi(av[i]));
		i++;
	}
	this->nbr_elements = static_cast<int>(vec.size());
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
		if (std::atol(av[i]) > 2147483647)
			 throw std::runtime_error("Error: number too large!");
		i++;
	}
}

// process of sort vector

void mergeVector(std::vector<int>& base_sequence, int left, int mid, int right) 
{
	std::vector<int> tmp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right)
	{
		if (base_sequence[i] < base_sequence[j])
			tmp.push_back(base_sequence[i++]);
		else
			tmp.push_back(base_sequence[j++]);
	}

	while (i <= mid)
		tmp.push_back(base_sequence[i++]);

	while (j <= right)
		tmp.push_back(base_sequence[j++]);

	for (size_t k = 0; k < tmp.size(); ++k)
		base_sequence[left + k] = tmp[k];
}

void mergeSort_vector(std::vector<int>& base_sequence, int left, int right) 
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	mergeSort_vector(base_sequence, left, mid);
	mergeSort_vector(base_sequence, mid + 1, right);
	mergeVector(base_sequence, left, mid, right);
}

std::vector<size_t> jacobsthal_order_vec(size_t n) {
    std::vector<size_t> jacobsthal_order;
    std::vector<bool> added(n, false);
    // 1. Generate Jacobsthal numbers and add them if < n
    size_t j1 = 0, j2 = 1;
    while (j2 < n) {
        if (!added[j2]) {
            jacobsthal_order.push_back(j2);
            added[j2] = true;
        }
        size_t next = j2 + 2 * j1;
        j1 = j2;
        j2 = next;
    }
    // 2. Add remaining indices that weren't added yet
    for (size_t i = 0; i < n; ++i) {
        if (!added[i]) {
            jacobsthal_order.push_back(i);
        }
    }
    return jacobsthal_order;
}

void PmergeMe::sort_vector()
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
	std::vector<int> base_sequence;
	std::vector<int> to_insert;
	for (size_t i = 0; i < pair_vec.size(); ++i)
	{
		base_sequence.push_back(pair_vec[i].first);
		to_insert.push_back(pair_vec[i].second);
	}
	mergeSort_vector(base_sequence, 0, static_cast<int>(base_sequence.size()) - 1);

	std::vector<size_t> insertion_order;
	insertion_order = jacobsthal_order_vec(to_insert.size());
	for (size_t i = 0; i < to_insert.size(); ++i)
	{
		int value = to_insert[insertion_order[i]];
		std::vector<int>::iterator pos = std::lower_bound(base_sequence.begin(), base_sequence.end(), value);
		base_sequence.insert(pos, value);
	}
	if (has_pair)
	{
		std::vector<int>::iterator pos = std::lower_bound(base_sequence.begin(), base_sequence.end(), save_last);
		base_sequence.insert(pos, save_last);
	}
		
	vec = base_sequence;
	
	gettimeofday(&end, NULL);
	
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	this->vec_time = seconds * 1000000.0 + microseconds;
}


//================================================================
//================================================================
//================================================================
//================================================================

// process of sort deque

void mergeDeque(std::deque<int>& base_sequence, int left, int mid, int right) 
{
	std::deque<int> tmp;
	int i = left;
	int j = mid + 1;

	while (i <= mid && j <= right) 
	{
		if (base_sequence[i] < base_sequence[j])
			tmp.push_back(base_sequence[i++]);
		else
			tmp.push_back(base_sequence[j++]);
	}

	while (i <= mid)
		tmp.push_back(base_sequence[i++]);

	while (j <= right)
		tmp.push_back(base_sequence[j++]);

	for (size_t k = 0; k < tmp.size(); ++k)
		base_sequence[left + k] = tmp[k];
}

void mergeSort_deque(std::deque<int>& base_sequence, int left, int right) 
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	mergeSort_deque(base_sequence, left, mid);
	mergeSort_deque(base_sequence, mid + 1, right);
	mergeDeque(base_sequence, left, mid, right);
}

std::deque<size_t> jacobsthal_order_deq(size_t n) {
    std::deque<size_t> jacobsthal_order;
    std::deque<bool> added(n, false);
    // 1. Generate Jacobsthal numbers and add them if < n
    size_t j1 = 0, j2 = 1;
    while (j2 < n) {
        if (!added[j2]) {
            jacobsthal_order.push_back(j2);
            added[j2] = true;
        }
        size_t next = j2 + 2 * j1;
        j1 = j2;
        j2 = next;
    }
    // 2. Add remaining indices that weren't added yet
    for (size_t i = 0; i < n; ++i) {
        if (!added[i]) {
            jacobsthal_order.push_back(i);
        }
    }
    return jacobsthal_order;
}

void PmergeMe::sort_deque()
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
	for (size_t i = 0; i < deq.size(); i += 2)
	{
		int first = deq[i];
		int second = deq[i + 1];
		if (first > second)
			std::swap(first, second);
		pair_deq.push_back(std::make_pair(first, second));
	}
	std::deque<int> base_sequence;
	std::deque<int> to_insert;
	for (size_t i = 0; i < pair_deq.size(); ++i)
	{
		base_sequence.push_back(pair_deq[i].first);
		to_insert.push_back(pair_deq[i].second);
	}
	mergeSort_deque(base_sequence, 0, static_cast<int>(base_sequence.size()) - 1);
	// for (size_t i = 0; i < to_insert.size(); ++i)
	// {
	// 	std::deque<int>::iterator pos = std::lower_bound(base_sequence.begin(), base_sequence.end(), to_insert[i]);
	// 	base_sequence.insert(pos, to_insert[i]);
	// }

	std::deque<size_t> insertion_order;
	insertion_order = jacobsthal_order_deq(to_insert.size());
	for (size_t i = 0; i < to_insert.size(); ++i)
	{
		int value = to_insert[insertion_order[i]];
		std::deque<int>::iterator pos = std::lower_bound(base_sequence.begin(), base_sequence.end(), value);
		base_sequence.insert(pos, value);
	}
	if (has_pair)
	{
		std::deque<int>::iterator pos = std::lower_bound(base_sequence.begin(), base_sequence.end(), save_last);
		base_sequence.insert(pos, save_last);
	}
		
	deq = base_sequence;
	
	gettimeofday(&end, NULL);
	
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	this->deq_time = seconds * 1000000.0 + microseconds;
}

void PmergeMe::print_sorted_numer(std::string str)
{
	std::cout << str;
	for (int i = 0; i < this->nbr_elements; ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::print_time_to_process(std::string str)
{
	double time;
	if(str == "vector")
		time = this->vec_time;
	else
		time = this->deq_time;
	std::cout << "Time to process a range of " << this->nbr_elements 
		 << " elements with std::[" << str << "] : " 
		 << std::fixed << std::setprecision(5) 
		 << time << " us" << std::endl;
}

void PmergeMe::process_sort()
{
	print_sorted_numer("Before: ");

	sort_vector();
	sort_deque();

	print_sorted_numer("After:  ");

	print_time_to_process("vector");
	print_time_to_process("deque");
}