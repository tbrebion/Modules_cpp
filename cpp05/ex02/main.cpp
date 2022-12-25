/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:52:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 14:34:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int	main(){

	Bureaucrat	expert("Joe", 5);
	Bureaucrat	beginner("Jim", 148);

	std::string str = "Joe";
	PresidentialPardonForm formular1(str);

	std::string str1 = "TeslaRobotics";
	RobotomyRequestForm formular2(str1);

	std::string str2 = "SecretGarden";
	ShrubberyCreationForm formular3(str2);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	beginner.signForm(formular3);	
	beginner.signForm(formular2);	
	expert.signForm(formular1);	
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	beginner.executeForm(formular3);	
	beginner.executeForm(formular2);	
	beginner.executeForm(formular1);	
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	expert.signForm(formular3);
	expert.signForm(formular2);
	expert.signForm(formular1);
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	expert.executeForm(formular3);	
	expert.executeForm(formular2);	
	expert.executeForm(formular2);	
	expert.executeForm(formular1);	
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	return (0);
}
