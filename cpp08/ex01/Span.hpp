/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:05:33 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/19 13:05:36 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		template <typename T>
		void add_range(T begin, T end)
		{
			unsigned int size = std::distance(begin, end);
			if (numbers.size() + size > N)
				throw std::length_error("Span is full"); 
			for(T it = begin; it != end; ++it)
				numbers.push_back(*it);
		}		
};

#endif