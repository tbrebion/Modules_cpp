/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:14:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 15:11:10 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	
	std::cout << "WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy._type){

	std::cout << "WrongCat copy constructor called" << std::endl;
	return;
}

WrongCat::~WrongCat(){

	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &x){

	this->_type = x._type;
	return (*this);
}

void	WrongCat::makeSound()const{

	std::cout << "MIAOU" << std::endl;
	return;
}
