/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:31:18 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/01 20:17:31 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        
    private:
        static AForm *makeShrubbery(const std::string &target);
        static AForm *makeRobotomy(const std::string &target);
        static AForm *makePresidential(const std::string &target);

        typedef AForm *(*FormCreator)(const std::string &target);

        struct FormType {
            std::string name;
            FormCreator creator;
        };
};

#endif