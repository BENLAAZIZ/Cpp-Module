/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:49 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade)
{
	if (_grade < 1)
		throw  GradeTooHighException();
	else if (_grade > 150)
		throw  GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade)
{	
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->grade = obj.grade;
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
	return this->grade;
}

void Bureaucrat::increment()
{
	if ((getGrade() - 1) < 1)
		throw  GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement()
{
	if ((getGrade() + 1) > 150)
		throw  GradeTooLowException();
	this->grade++;
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
