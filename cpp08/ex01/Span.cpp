/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:18:12 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/17 15:51:30 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span &src) : N(src.N), numbers(src.numbers)
{
}

Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        this->N = src.N;
        this->numbers = src.numbers;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (numbers.size() >= N)
        throw std::runtime_error("Span is full");
    numbers.push_back(n);
}

int Span::shortestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    std::sort(numbers.begin(), numbers.end());
    int minSpan = 2147483647;

    std::vector<int>::iterator end = numbers.end();
    for(std::vector<int>::iterator it = numbers.begin(); it != end; it++)
    {
        std::vector<int>::iterator next = it + 1;
        if (next != end)
        {
            int span = *next - *it;
            if (span < minSpan)
                minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    int max = *std::max_element(numbers.begin(), numbers.end());
    int min = *std::min_element(numbers.begin(), numbers.end());
    return max - min;
}
