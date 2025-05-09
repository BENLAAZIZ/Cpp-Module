/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:04:08 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/06 17:06:04 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

	Form::Form(const std::string& name, int  grade_signe, int grade_exec): _name(name)
																			, grade_to_signe(grade_signe)
																			, grade_to_exec(grade_exec)
	{
		if (grade_signe < 1 || grade_exec < 1)
			throw Form::GradeTooHighException();
		if (grade_signe > 150 || grade_exec > 150)
			throw Form::GradeTooLowException();
																				
	}
	
	Form::Form(const Form&  obj) : _name(obj._name)
								, _signed(obj._signed)
								, grade_to_signe(obj.grade_to_signe)
								, grade_to_exec(obj.grade_to_exec){	
									
	}
	
	Form& Form::operator=(const Form& obj)
	{
		if (this != &obj)
		{
			this->_signed = obj._signed;
		}
		return *this;
	}
	
	Form::~Form()
	{
		
	}

std::string Form::getName() const {
	return this->_name;
}

bool Form::is_signed() const {
	return this->_signed;
}

int Form::get_grade_to_signe() const {
	return this->grade_to_signe;
}

int Form::get_grade_to_exec() const {
	return this->grade_to_exec;	
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->grade_to_signe)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Grade is too low";
}
	


std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "Form : " << obj.getName() << " is ";
	if (obj.is_signed())
		os << "signed";
	else
		os << "not signed";
	os << " and has a grade to sign of " << obj.get_grade_to_signe() << " and a grade to execute of " << obj.get_grade_to_exec() << ".";
	return os;  
}
