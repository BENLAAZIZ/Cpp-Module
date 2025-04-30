/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:01:27 by hben-laz          #+#    #+#             */
/*   Updated: 2025/04/30 18:48:53 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Aform("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
    AForm(src), _target(src._target){
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->is_signed())
        throw Form::GradeTooLowException();
    if (executor.getGrade() > this->get_grade_to_exec())
        throw Form::GradeTooLowException();
    
    std::ofstream file(_target + "_shrubbery");
    if (!file.is_open())
        throw std::ios_base::failure("Failed to open file");
    
    file << "       _-_\n";
    file << "    /~~   ~~\\\n";
    file << "  /~~         ~~\\\n";
    file << " /~~           ~~\\\n";
    file << "/~~             ~~\\\n";
    file << "\\~~             ~~/\n";
    file << " \\~~           ~~/\n";
    file << "  \\~~         ~~/\n";
    file << "   \\__-__-__-__/\n";
}