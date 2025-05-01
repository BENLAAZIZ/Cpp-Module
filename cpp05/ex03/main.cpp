/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 04:00:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/17 18:00:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


// test main


int main() {
    Intern someRandomIntern;

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    AForm* form4 = someRandomIntern.makeForm("invalid form", "Nobody");

    Bureaucrat b1("Zaphod", 1);
    if (form1) {
        b1.signForm(*form1);
        b1.executeForm(*form1);
    }

    if (form2) {
        b1.signForm(*form2);
        b1.executeForm(*form2);
    }

    if (form3) {
        b1.signForm(*form3);
        b1.executeForm(*form3);
    }

    // clean up
    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return 0;
}
