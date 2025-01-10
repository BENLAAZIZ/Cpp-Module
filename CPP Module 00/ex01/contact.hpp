/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:39:35 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/22 19:39:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string firs_name;
        std::string	last_name;
        std::string	nick_name;
        std::string	phone_num; 
        std::string	secret;
    public:
        std::string	get_first_name();
        std::string	get_last_name();
        std::string	get_nick_name();
        std::string	get_phone_num();
        std::string	get_secret();
        void        set_first_name(std::string first_name);
        void        set_last_name(std::string last_name);
        void	    set_nick_name(std::string nick_name);
        void	    set_phone_num(std::string phone_num);
        void	    set_secret(std::string secret); 
};

#endif