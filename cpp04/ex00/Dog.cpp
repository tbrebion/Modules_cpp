/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:30:44 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 15:10:54 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &cpy) : Animal(cpy._type){

	std::cout << "Dog copy constructor called" << std::endl;
	return;
}

Dog::~Dog(){

	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog	&Dog::operator=(const Dog &x){

	this->_type = x._type;
	return (*this);
}

void	Dog::makeSound()const{

	std::cout << "WAF" << std::endl;
	return;
}
