/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:01:56 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/01 20:07:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_to_sign;
		const int _grade_to_exec;
		std::string _target;
	protected:
		AForm(const std::string &name, int grade_to_sign, int grade_to_exec, const std::string &target);
	public:
		AForm(std::string target);
		AForm(const AForm &src);
		virtual ~AForm();
		AForm &operator=(const AForm &rhs);

		std::string getName() const;
		bool is_signed() const;
		int get_grade_to_sign() const;
		int get_grade_to_exec() const;
		std::string getTarget() const;

		void setTarget(std::string target);
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class FormNotSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class FileOpenException : public std::exception
		{
		    public:
		        const char *what() const throw();
		};


};

std::ostream &operator<<(std::ostream &o, AForm const &i);




#endif