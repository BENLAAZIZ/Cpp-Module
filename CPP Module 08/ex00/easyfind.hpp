/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:16:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/19 12:51:46 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &ct, int value)
{
    typename T::iterator it = std::find(ct.begin(), ct.end(), value);
    if (it == ct.end())
        throw std::runtime_error("nothing found");
    return it;
}

#endif