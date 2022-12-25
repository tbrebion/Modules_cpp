/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:48 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 15:05:59 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain_ptr(new Brain()){
	
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &cpy) : Animal(cpy._type), _brain_ptr(new Brain(*(cpy._brain_ptr))){

	std::cout << "Cat copy constructor called" << std::endl;
	return;
}

Cat::~Cat(){

	delete this->_brain_ptr;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat	&Cat::operator=(const Cat &x){

	this->_type = x._type;
	this->_brain_ptr = new Brain(*x._brain_ptr);
	return (*this);
}

void	Cat::makeSound()const{

	std::cout << "MIAOU" << std::endl;
	return;
}

void	Cat::extractIdeas()const{
	
	for (int i = 0; i < 100; i++){

		std::cout << this->_brain_ptr->extractIdeas(i) << std::endl;
	}
	return;
}
