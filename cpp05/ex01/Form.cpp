/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:04:08 by hben-laz          #+#    #+#             */
/*   Updated: 2025/04/29 18:26:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"




std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	// os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;  
}
