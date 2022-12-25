/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:53:23 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 15:21:00 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NONAME"), _grade(DEFAULT_GRADE){

	std::cout << "Defautl Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	
	if (!exceptionHandler(grade)){
		
		this->_grade = DEFAULT_GRADE;
	}
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy){

	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	(*this) = cpy;
	return;
}

Bureaucrat::~Bureaucrat(){

	std::cout << "Bureaucrat destructor called" << std::endl;
	return;
}

int	Bureaucrat::getGrade()const{

	return (this->_grade);
}

std::string Bureaucrat::getName()const{

	return (this->_name);
}

bool	Bureaucrat::exceptionHandler(int grade){

	try{
		
		if (grade < HIGHEST_GRADE){
			
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > LOWEST_GRADE){

			throw Bureaucrat::GradeTooLowException();
		}
		else{
			
			return (true);
		}
	}
	catch (std::exception &e){

		std::cout << e.what() << std::endl;
	}
	return (false);
}

void	Bureaucrat::signForm(Form &x)const{

	if (!((Form *)&x))
		return;
	try{
		
		x.beSigned(*this);
		std::cout << this->getName() << " signed " << x.getName() << std::endl;
	}
	catch (std::exception &e){
		
		std::cout << this->getName() << " cant sign " << x.getName() 
		<< " because " << e.what() << std::endl;
	}
	return;
}

void	Bureaucrat::executeForm(const Form &form){

	if (!((Form *)&form))
		return;
	try{
		
		std::cout << this->_name << " execute " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(std::exception &e){

		std::cout << this->getName() << " can't exec " << form.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &x){

	this->_grade = x._grade;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++(){

	if (exceptionHandler(this->_grade - 1)){
		
		--(this->_grade);
	}
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--(){

	if (exceptionHandler(this->_grade + 1)){
		
		++(this->_grade);
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &x){

	out << "NAME : " << x.getName() << " GRADE : " << x.getGrade();
	return (out);
}
