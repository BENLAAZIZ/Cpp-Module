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

# include <cstdlib>
# include <iostream>
# include <vector>
# include <deque>
# include <sys/time.h>
# include <iomanip>

class PmergeMe
{
	private :
		std::vector<int> vec;
		std::deque<int> deq;
		double	vec_time;
		double	deq_time;
		int		save_last;
		bool	has_pair;
		int		nbr_elements;
	public :
		PmergeMe(char **av);
		PmergeMe(const PmergeMe& obj);
		PmergeMe&  operator=(const PmergeMe& obj);
		~PmergeMe();

		void	get_elements(char **av);
		void	process_sort();

		void	sort_vector();
		void	sort_deque();

		void	print_sorted_numer(std::string str);
		void	print_time_to_process(std::string str);
};

void	check_parse(char **av);