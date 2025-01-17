/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:03:41 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/17 16:30:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grad) : name(_name), grad(_grad)
{
	if (grad < 1)
		throw  GradeTooHighException();
	else if (grad > 150)
		throw  GradeTooLowException();
	
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grad(obj.grad)
{	
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->grad = obj.grad;
	return *this;
}

Bureaucrat::~Bureaucrat()
{	
}


std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grad;
}


void Bureaucrat::increment()
{
	if (getGrade() >= 150)
		throw  GradeTooLowException();
	this->grad++;
}

void Bureaucrat::decrement()
{
	if (getGrade() <= 1)
		throw  GradeTooHighException();
	this->grad--;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;  
}
