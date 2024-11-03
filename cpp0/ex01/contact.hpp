/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:53:16 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/03 01:54:33 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string	firs_name;
        std::string	last_name;
        std::string	nick_name;
        std::string	phone_num;
        std::string	secret;
    public:
        Contact(void);
        ~Contact(void);
        /* Getters and setters */
        std::string	get_first_name(void);
        std::string	get_last_name(void);
        std::string	get_nick_name(void);
        std::string	get_phone_num(void);
        std::string	get_secret(void);
        void	set_first_name(std::string first_name);
        void	set_last_name(std::string last_name);
        void	set_nick_name(std::string nick_name);
        void	set_phone_num(std::string phone_num);
        void	set_secret(std::string secret);
        /* Methods */
    
};



#endif