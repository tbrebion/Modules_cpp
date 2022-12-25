/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:15:44 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/27 16:16:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("UKNOWN"){

	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){

	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy){

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	(*this) = cpy;
	return;
}

WrongAnimal::~WrongAnimal(){

	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

std::string	WrongAnimal::getType()const{

	return (this->_type);
}

void	WrongAnimal::setType(std::string type){

	this->_type = type;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &x){

	this->_type = x._type;
	return (*this);
}

void	WrongAnimal::makeSound()const{

	std::cout << "Default WrongAnimal sound" << std::endl;
	return;
}
