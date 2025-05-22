/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:56:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/22 13:36:23 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& obj)
{
	if (this != &obj)
	{
		this->result = obj.result;
		this->stack = obj.stack;
	}
	
}

RPN& RPN::operator=(const RPN& obj)
{
	if (this != &obj)
	{
		this->result = obj.result;
		this->stack = obj.stack;
	}
	return *this;
}

RPN::~RPN() {}

int RPN::get_result() const
{
	return this->result;
}


void RPN::calculator_process(char **str)
{
	while (*str)
	{
		if (isdigit(**str))
		{
			this->stack.push(atoi(*str));
		}
		else if (**str == '+' || **str == '-' || **str == '*' || **str == '/')
		{
			if (this->stack.size() != 2)
				throw std::runtime_error("Error: invalid operation.");
			int b = this->stack.top();
			this->stack.pop();
			int a = this->stack.top();
			this->stack.pop();
			if (**str == '/' and b == 0)
				throw std::runtime_error("Error: division by zero.");
			// operation
			this->stack.push(this->result);
		}
		else
			throw std::runtime_error("Error: invalid character.");
		str++;
	}
}


