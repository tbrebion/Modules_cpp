/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:39:15 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/21 17:12:57 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0){

	std::cout << "default construcor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &x){

	std::cout << "copy construcor called" << std::endl;
	(*this) = x;
	return;
}

Fixed::~Fixed(){

	std::cout << "destrucor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(const Fixed &x){

	std::cout << "copy assignements operator called" << std::endl;
	this->_n = x.getRawBits();
	return (*this);
}

int		Fixed::getRawBits()const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw){
	
	this->_n = raw;
	return;
}
