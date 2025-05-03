/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:41:28 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/03 12:19:35 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    const std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    FormCreator creators[] = {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPresidential
    };

    for (int i = 0; i < 3; ++i) {
        if (formNames[i] == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }
    std::cerr << "Error: Unknown form name '" << formName << "'" << std::endl;
    return NULL;
}