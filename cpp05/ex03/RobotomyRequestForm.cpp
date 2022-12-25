/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:51:23 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 15:13:23 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target) 
: Form("Robotomy form", 72, 45), _target(target){

	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const Form &cpy)
: Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec()) {
		
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)const{

	if (this->Form::getSignedStatus() == false){

		throw Form::FormularNotSignedException();
	}
	if (executor.getGrade() > this->Form::getGradeToExec()){

		throw Form::GradeTooHighException();
	}
	std::cout << "ZZZZZZZZZZZZZZZZZ" << std::endl;
	std::cout << this->_target;
	srand(time(NULL));
	std::cout << (rand() % 2 ? " has been successfully robotomized!" : "'s robotomy failed!") << std::endl;
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const Form &x){

	if (this != &x){
		
		this->Form::operator=(x);
	}
	return (*this);
}
