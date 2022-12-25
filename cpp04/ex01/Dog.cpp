/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:30:44 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 14:54:04 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain_ptr(new Brain()) {

	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &cpy) : Animal(cpy._type), _brain_ptr(new Brain(*(cpy._brain_ptr))){

	std::cout << "Dog copy constructor called" << std::endl;
	return;
}

Dog::~Dog(){

	delete this->_brain_ptr;
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog	&Dog::operator=(const Dog &x){

	this->_type = x._type;
	this->_brain_ptr = new Brain(*x._brain_ptr);
	return (*this);
}

void	Dog::makeSound()const{

	std::cout << "WAF" << std::endl;
	return;
}

void	Dog::extractIdeas()const{
	
	for (int i = 0; i < 100; i++){

		std::cout << this->_brain_ptr->extractIdeas(i) << std::endl;
	}
	return;
}
