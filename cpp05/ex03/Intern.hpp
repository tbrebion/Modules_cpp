/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:05:58 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 15:21:42 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

enum	FORM_TYPE{

	PRESIDENT_FORM,
	ROBOTOMY_FORM,
	SHRUBBERY_FORM,
	DEFAULT
};

class	Intern{

	public:
		Intern();
		Intern(const Intern &cpy);
		~Intern();

		FORM_TYPE	formType(const std::string type);
		Form		*makeForm(std::string formularName, std::string formularTarget);

		Intern	&operator=(const Intern &x);
};

#endif
