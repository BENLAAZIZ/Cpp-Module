/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:02:20 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/06 17:53:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm("RobotomyRequestForm", 72, 45, target){
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) :
    AForm(cpy){
    setTarget(cpy.getTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        setTarget(obj.getTarget());
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!(is_signed()))
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->get_grade_to_exec())
		throw AForm::GradeTooLowException();

	std::cout << "BZZZZZZZ... drilling noises...\n";
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully!\n";
	else
		std::cout << "Robotomy failed on " << getTarget() << ".\n";
}