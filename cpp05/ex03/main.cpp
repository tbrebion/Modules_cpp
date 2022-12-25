/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:31:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 14:07:45 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(){

	Bureaucrat	Ministre("Al", 1);
	Intern	steve;
	Form	*form;
	Form	*form1;

	std::cout << std::endl << std::endl << std::endl;

	form = steve.makeForm("PresidentialPardonForm", "Mr J");
	form1 = steve.makeForm("invalid", "Mr J");
	
	std::cout << std::endl << std::endl << std::endl;
		
	Ministre.signForm(*form);
	Ministre.executeForm(*form);
		
	std::cout << std::endl << std::endl << std::endl;

	delete form;
	delete form1;
	
	return (0);
}
