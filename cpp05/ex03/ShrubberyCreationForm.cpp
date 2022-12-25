/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:53:01 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 15:43:23 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) 
: Form("Shrubbery form", 145, 137), _target(target){

	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const Form &cpy) 
: Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec()){

	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)const{

	if (this->Form::getSignedStatus() == false){

		throw Form::FormularNotSignedException();
	}
	if (executor.getGrade() > this->Form::getGradeToExec()){

		throw Form::GradeTooHighException();
	}
	std::string str = this->_target + "_shrubbery";
	std::ofstream tree(str.c_str());
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"##################           " << "##################        " << std::endl;
	tree <<"       | |                   " << "       | |                " << std::endl;
	tree <<"       | |                   " << "       | |                " << std::endl;
	tree <<"       | |                   " << "       | |                " << std::endl;
	tree <<"       | |                   " << "       | |                " << std::endl;
	tree <<"+++++++++++++++++++++++++++++" << "++++++++++++++++++++++++++" << std::endl;
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const Form &x){

	if (this != &x){
		
		this->Form::operator=(x);
	}
	return (*this);
}
