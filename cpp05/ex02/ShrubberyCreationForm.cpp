/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:01:27 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/01 16:41:02 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		AForm("ShrubberyCreationForm", 145, 137, target) {
	setTarget(target);
		}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) :
	AForm(cpy){
		setTarget(cpy.getTarget());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		setTarget(obj.getTarget());
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->is_signed())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->get_grade_to_exec())
		throw AForm::GradeTooLowException();
	
	std::ofstream file(getTarget() + "_shrubbery");
	if (!file.is_open())
		throw AForm::FileOpenException();
	
	file << "       _-_\n";
	file << "    /~~   ~~\\\n";
	file << "  /~~         ~~\\\n";
	file << " /~~           ~~\\\n";
	file << "/~~             ~~\\\n";
	file << "\\~~             ~~/\n";
	file << " \\~~           ~~/\n";
	file << "  \\~~         ~~/\n";
	file << "   \\__-__-__-__/\n";
	file << "       | |\n";
	file << "       | |\n";
	file << "       | |\n";
	file << "       | |\n";
	file << "       | |\n";
	file.close();
}