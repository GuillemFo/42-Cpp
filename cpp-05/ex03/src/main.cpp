/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:10:20 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:09:47 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        Intern someRandomIntern;
        Bureaucrat boss("Alice", 1);       // Highest rank
        Bureaucrat assistant("Bob", 50);   // Mid-rank
        Bureaucrat intern("Charlie", 140); // Lower rank

        Form* form;

        // Test case 1: Create and execute "robotomy request" form with different bureaucrats
        form = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "Created Form: " << *form << std::endl;

        form->beSigned(assistant);  // Assistant attempts to sign
        boss.executeForm(*form);    // Boss attempts to execute

        delete form;

        // Test case 2: Create and execute "shrubbery creation" form
        form = someRandomIntern.makeForm("shrubbery creation", "Garden");
        std::cout << "\nCreated Form: " << *form << std::endl;

        intern.signForm(*form);      // Intern attempts to sign (should fail)
        assistant.signForm(*form);   // Assistant signs successfully
        assistant.executeForm(*form); // Assistant attempts to execute (should fail)
        boss.executeForm(*form);     // Boss executes successfully

        delete form;

        // Test case 3: Create and execute "presidential pardon" form
        form = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
        std::cout << "\nCreated Form: " << *form << std::endl;

        assistant.signForm(*form);   // Assistant attempts to sign (should fail)
        boss.signForm(*form);        // Boss signs successfully
        boss.executeForm(*form);     // Boss executes successfully

        delete form;

        // Test case 4: Attempt to create a non-existent form
        form = someRandomIntern.makeForm("time off request", "Marvin"); // Should throw an exception
    } 
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

