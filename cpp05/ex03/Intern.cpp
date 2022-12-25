/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:05:56 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 13:51:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){

	std::cout << "Intern constructor called" << std::endl;
	return;
}

Intern::Intern(const Intern &cpy){

	(void)cpy;
	std::cout << "Intern copy conntructor called" << std::endl;
	return;
}

Intern::~Intern(){

	std::cout << "Intern destructor called" << std::endl;
	return;
}

FORM_TYPE	Intern::formType(const std::string type){

	if (type == "PresidentialPardonForm")
		return (PRESIDENT_FORM);
	if (type == "RobotomyRequestForm")
		return (ROBOTOMY_FORM);
	if(type == "ShrubberyCreationForm")
		return (SHRUBBERY_FORM);
	return (DEFAULT);
}

Form	*Intern::makeForm(std::string formularName, std::string formularTarget){

	Form		*ptr = NULL;
	FORM_TYPE	type = formType(formularName);

	switch (type){

		case PRESIDENT_FORM :
			ptr = new PresidentialPardonForm(formularTarget);
			break;
		case ROBOTOMY_FORM :
			ptr = new RobotomyRequestForm(formularTarget);
			break;
		case SHRUBBERY_FORM :
			ptr = new ShrubberyCreationForm(formularTarget);
			break;
		default :
			std::cout << "The form " << formularName << " does not exist" << std::endl;
	}
	return (ptr);
}

Intern	&Intern::operator=(const Intern &x){

	(void)x;
	return (*this);
}
