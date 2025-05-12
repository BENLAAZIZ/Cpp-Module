/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:11:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/12 16:25:15 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void print(T& element)
{
    std::cout << element << " ";
}

template <typename T>
void iter(T* array, int len, void (*func)(T&))
{
    for (int i = 0; i < len; ++i)
    {
        func(array[i]);
    }
}

#endif