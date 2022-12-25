/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:02:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 15:42:02 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target) 
: Form("President form", 25, 5), _target(target){

	std::cout << "PresidentialPardonForm constructor called" << std::endl;	
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const Form &cpy) 
: Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec()){

	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(){

	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)const{

	if (this->Form::getSignedStatus() == false){

		throw Form::FormularNotSignedException();
	}
	if (executor.getGrade() > this->Form::getGradeToExec()){

		throw Form::GradeTooHighException();
	}
	std::cout << this->_target << " you have been forgive by Zaphod Beeblebrox" << std::endl;
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const Form &x){

	if (this != &x){
		
		this->Form::operator=(x);
	}
	return (*this);
}
