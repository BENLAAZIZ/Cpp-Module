/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:03:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/17 16:21:30 by hben-laz         ###   ########.fr       */
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
        Bureaucrat(const std::string _name, int _grad);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void increment();
        void decrement();
        
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
            
        };
        
        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);


#endif