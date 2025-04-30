/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:04:28 by hben-laz          #+#    #+#             */
/*   Updated: 2025/04/30 15:50:19 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private: 
			const std::string 	_name;
			bool				_signed;
			const int 			grade_to_signe;
			const int 			grade_to_exec;
	public:
		Form(const std::string& name, int  grade_signe, int grade_exec);
		Form(const Form&  obj);
		Form& operator=(const Form& obj);
		~Form();

		std::string getName() const;
		bool is_signed() const;
		int get_grade_to_signe() const;
		int get_grade_to_exec() const;
		
		void beSigned(const Bureaucrat& b);

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);


#endif