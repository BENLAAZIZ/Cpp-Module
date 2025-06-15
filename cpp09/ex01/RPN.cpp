/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:56:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/23 16:51:44 by hben-laz         ###   ########.fr       */
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

int use_operator(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			return (a / b);
		default:
			throw std::runtime_error("Error: invalid operator.");
	}
}

void RPN::calculator_process(std::string line)
{
	int i = 0;
	int count_op = 0;
	int nbr = 0;
	while (line[i])
	{
		if (line[i] == ' ')
		{
			i++;
			continue;
		}
		if (isdigit(line[i]))
		{
			if (line[i + 1] != ' ')
				throw std::runtime_error("Error: invalid number.");
			this->stack.push((line[i] - '0'));
			if (line[i + 1] == '\0')
				break;
			nbr++;
		}
		else if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/')
		{
			if (line[i + 1] != ' ' && line[i + 1] != '\0')
				throw std::runtime_error("Error: invalid input.");
			if (this->stack.size() < 2)
				throw std::runtime_error("Error: not enough operands.");
			int b = this->stack.top();
			this->stack.pop();
			int a = this->stack.top();
			this->stack.pop();
			if (line[i] == '/' and b == 0)
				throw std::runtime_error("Error: division by zero.");
			this->result = use_operator(a, b, line[i]);
			this->stack.push(this->result);
			count_op++;
		}
		else
			throw std::runtime_error("Error: invalid character.");
		i++;
	}
	if (count_op != nbr - 1)
		throw std::runtime_error("Error: invalid operation.");
	this->stack.pop();
}