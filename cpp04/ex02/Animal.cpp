/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:00:56 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/28 16:17:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("UKNOWN"){

	std::cout << "Default Animal constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type){

	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &cpy){

	std::cout << "Animal copy constructor called" << std::endl;
	(*this) = cpy;
	return;
}

Animal::~Animal(){

	std::cout << "Animal destructor called" << std::endl;
	return;
}

std::string	Animal::getType()const{

	return (this->_type);
}

void	Animal::setType(std::string type){

	this->_type = type;
	return;
}

Animal	&Animal::operator=(const Animal &x){

	this->_type = x._type;
	return (*this);
}

void	Animal::makeSound()const{

	std::cout << "Default Animal sound" << std::endl;
	return;
}

void	Animal::extractIdeas()const{

	std::cout << "Animal thinking" << std::endl;
	return;
}
