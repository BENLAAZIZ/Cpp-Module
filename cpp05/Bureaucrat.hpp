/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:03:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/17 12:10:39 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class  Bureaucrat {
    private:
        const std::string name;
        int grad;
    public:
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grad);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator==(const Bureaucrat& obj);
        ~Bureaucrat();

        std::string getName();
        int getGrade();

        void increment();
        void decrement();
        

};


#endif