/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:43:49 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/31 13:55:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	
	std::string formular_name = "Random_formular";
	std::string Bureaucrat_name = "Random_bureaucrat";

	Bureaucrat bureaucrat(Bureaucrat_name, 10);

	try
	{
		Form formular1(formular_name, 50, 50);
		bureaucrat.signForm(formular1);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Invalid Formular's =>" << std::endl;
	try
	{
		Form formular2(formular_name, 1111, 1111);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form formular3(formular_name, -111, -111);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Valid Formular's => (TESTING INSERTION OPERATOR)"<< std::endl;
	try
	{
		Form formular4(formular_name, 15, 1);
		std::cout << formular4 << std::endl;
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);	
}
