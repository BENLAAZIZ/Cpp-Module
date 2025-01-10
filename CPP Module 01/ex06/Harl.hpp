/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:21:16 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/17 01:42:03 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class   Harl
{
    private :
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
    public :
            void complain( std::string level );
};

#endif