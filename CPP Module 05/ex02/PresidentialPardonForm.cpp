/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:03:37 by hben-laz          #+#    #+#             */
/*   Updated: 2025/04/30 20:20:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    AForm("PresidentialPardonForm", 25, 5, target){
    setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) :
    AForm(cpy){
    setTarget(cpy.getTarget());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        setTarget(obj.getTarget());
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!(is_signed()))
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->get_grade_to_exec())
        throw AForm::GradeTooLowException();

    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
