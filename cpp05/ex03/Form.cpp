/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:06:53 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 14:04:55 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _is_signed(false), _grade_to_sign(DEFAULT_GRADE), _grade_to_exec(DEFAULT_GRADE){

	std::cout << "Default Form constructor called" << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) 
: _name(name), _is_signed(false), _grade_to_sign(gradeToSign), _grade_to_exec(gradeToExec){
	
	if (gradeToSign < HIGHEST_GRADE || gradeToExec < HIGHEST_GRADE){
		
		throw Form::GradeTooHighException();
	}
	if (gradeToSign > LOWEST_GRADE || gradeToExec > LOWEST_GRADE){

		throw Form::GradeTooLowException();
	}
	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form(const Form &cpy) 
: _name(cpy.getName()), _grade_to_sign(cpy.getGradeToSign()), _grade_to_exec(cpy.getGradeToExec()){

	(*this) = cpy;
	return;
}

Form::~Form(){

	std::cout << "Form destructor called" << std::endl;
	return;
}

Form	&Form::operator=(const Form &x){
	
	this->_is_signed = x.getSignedStatus();
	return (*this);
}

std::string	Form::getName()const{

	return (this->_name);
}

bool	Form::getSignedStatus()const{

	return (this->_is_signed);
}

int	Form::getGradeToSign()const{
	
	return (this->_grade_to_sign);
	
}

int	Form::getGradeToExec()const{
	
	return (this->_grade_to_exec);
	
}

void	Form::beSigned(const Bureaucrat &x){

	const int i = x.getGrade();

	if (i <= this->_grade_to_sign){

		this->_is_signed = true;
	}
	else{

		throw Bureaucrat::GradeTooLowException();
	}
	return;
}

std::ostream	&operator<<(std::ostream &out, Form &form){

	out << "Name : " << form.getName() << std::endl << "Signed status : " << form.getSignedStatus() \
	<< std::endl << "Grade to sign : " << form.getGradeToSign() << std::endl << "Grade to exec : " << form.getGradeToExec();

	return (out);
}
