/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:31:49 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/01 20:18:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) { *this = src; }

Intern &Intern::operator=(const Intern &) { return *this; }

Intern::~Intern() {}

AForm *Intern::makeShrubbery(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomy(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidential(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    FormType forms[3] = {
        { "shrubbery creation", &Intern::makeShrubbery },
        { "robotomy request", &Intern::makeRobotomy },
        { "presidential pardon", &Intern::makePresidential }
    };

    for (int i = 0; i < 3; ++i)
    {
        if (forms[i].name == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].creator(target); // Call correct function pointer
        }
    }

    std::cout << "Intern couldn't create form: " << formName << std::endl;
    return 0;
}
