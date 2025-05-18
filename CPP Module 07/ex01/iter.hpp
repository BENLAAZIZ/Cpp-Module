/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:11:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/15 15:11:04 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void print(const T& elem)
{
    std::cout << elem << std::endl;;
}

template <typename T>
void iter(T *array, size_t len, void (*func)(const T&))
{
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

#endif