/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 15:11:14 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &cpy) : Animal(cpy._type){

	std::cout << "Cat copy constructor called" << std::endl;
	return;
}

Cat::~Cat(){

	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat	&Cat::operator=(const Cat &x){

	this->_type = x._type;
	return (*this);
}

void	Cat::makeSound()const{

	std::cout << "MIAOU" << std::endl;
	return;
}
