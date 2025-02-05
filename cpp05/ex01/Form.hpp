/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:13:03 by marvin            #+#    #+#             */
/*   Updated: 2025/02/03 13:13:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	private:
		const std::string name;
		bool  is_seg;
		const int grade;
		const int exec;
	public:
		Form(const std::string _name, int _grad);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();

		std::string getName() const;
		int			getGrade() const;
		int			getexec() const;
		bool		getSig() const;

		void		increment();
		void		decrement();
		
		class GradeTooHighException : public std::exception {
			const char* what() const throw(); 
		};
		
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif