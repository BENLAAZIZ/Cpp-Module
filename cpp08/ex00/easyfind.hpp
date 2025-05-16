/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:16:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/16 19:47:43 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>

template <typename T>
typename T::iterator easyfind(T &cont, int value)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), value);
    if (it == cont.end()) {
        throw std::runtime_error("nothing found");
    }
    return it;
}

#endif