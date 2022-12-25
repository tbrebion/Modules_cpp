/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:46:39 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/24 14:38:43 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){

	std::cout << "default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &x){

	std::cout << "copy constructor called" << std::endl;
	(*this) = x;	
	return;
}

Fixed::Fixed(const int val){

	std::cout << "int constructor called" << std::endl;
	this->_value = val << _bits; 
	return;
}

Fixed::Fixed(const float val){

	std::cout << "float constructor called" << std::endl;
	this->_value = (int)roundf(val * (1 << _bits));	
	return;
}

Fixed::~Fixed(){

	std::cout << "destructor called" << std::endl;
	return;
}

// Accessor

int		Fixed::getRawBits()const{

	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	
	this->_value = raw;
	return;
}

// Convertor

int	Fixed::toInt()const{
	
	return ((int)(roundf((float)_value / (1 << _bits))));
}

float	Fixed::toFloat()const{
	
	return ((float)_value / (1 << _bits));
}

// Overload operator

Fixed	&Fixed::operator=(const Fixed &x){

	std::cout << "copy assignements operator called" << std::endl;
	this->_value = x.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &x){
	
	out << x.toFloat();
	return (out);
}
