/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:19:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/01 16:06:51 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm(const std::string &name, int grade_to_sign, int grade_to_exec, const std::string &target)
		: _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _target(target)
{
	if (_grade_to_sign < 1 || _grade_to_exec < 1)
		throw GradeTooHighException();
	if (_grade_to_sign > 150 || _grade_to_exec > 150)
		throw GradeTooLowException();
}

AForm::AForm(std::string target) : _name("AForm")
								, _is_signed(false)
								, _grade_to_sign(150)
								, _grade_to_exec(150)
								, _target(target)
{
}

AForm::AForm(const AForm &src) : _name(src._name)
								, _is_signed(src._is_signed)
								, _grade_to_sign(src._grade_to_sign)
								, _grade_to_exec(src._grade_to_exec)
								, _target(src._target)
{
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		_is_signed = obj._is_signed;
		_target = obj._target;
	}
	return *this;
}

AForm::~AForm()
{
}


std::string AForm::getName() const
{
	return _name;
}

bool AForm::is_signed() const
{
	return _is_signed;
}

int AForm::get_grade_to_sign() const
{
	return _grade_to_sign;
}

int AForm::get_grade_to_exec() const
{
	return _grade_to_exec;
}

std::string AForm::getTarget() const
{
	return _target;
}

void AForm::setTarget(std::string target)
{
	_target = target;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw GradeTooLowException();
	_is_signed = true;
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed!";
}

const char *AForm::FileOpenException::what() const throw()
{
	return "Failed to open file!";
}


std::ostream &operator<<(std::ostream &o, AForm const &aform)
{
	o << "AForm: " << aform.getName() 
		<< ", is_signed: " 
		<< aform.is_signed() 
		<< ", grade_to_sign: " 
		<< aform.get_grade_to_sign() 
		<< ", grade_to_exec: " 
		<< aform.get_grade_to_exec();
	return o;
}