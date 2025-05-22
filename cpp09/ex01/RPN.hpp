/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:57:08 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/22 14:58:17 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
		int result;
		std::stack<int> stack;
	public:
		RPN();
		RPN(const RPN& obj);
		RPN& operator=(const RPN& obj);
		~RPN();

		int get_result() const;
		void calculator_process(std::string line);
};