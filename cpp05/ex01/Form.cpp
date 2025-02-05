/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:12:25 by marvin            #+#    #+#             */
/*   Updated: 2025/02/03 13:12:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string _name, int _grad) : name(_name), grad(_grad)
{
	if (grad < 1)
		throw  GradeTooHighException();
	else if (grad > 150)
		throw  GradeTooLowException();
	
}

Form::Form(const Form& obj) : name(obj.name), grad(obj.grad)
{	
}

Form& Form::operator=(const Form& obj)
{
	if (this != &obj)
		this->grad = obj.grad;
	return *this;
}

Form::~Form()
{	
}


std::string Form::getName() const
{
	return this->name;
}

int Form::getGrade() const
{
	return this->grad;
}


void Form::increment()
{
	if (getGrade() >= 150)
		throw  GradeTooLowException();
	this->grad++;
}

void Form::decrement()
{
	if (getGrade() <= 1)
		throw  GradeTooHighException();
	this->grad--;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}


std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", Form grade " << obj.getGrade() << ".";
    return os;  
}
