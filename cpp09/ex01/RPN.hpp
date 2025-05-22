/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:57:08 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/22 12:28:45 by hben-laz         ###   ########.fr       */
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
		RPN(RPN const& obj);
		RPN& operator=(const RPN& obj);
		~RPN();

		bool pars_line(char **str);
		int calculator_process(char **str);
		
};