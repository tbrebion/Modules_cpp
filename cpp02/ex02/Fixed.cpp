/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:46:39 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/03 17:11:47 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){

	return;
}

Fixed::Fixed(const Fixed &x){

	(*this) = x;	
	return;
}

Fixed::Fixed(const int val){

	this->_value = val << _bits; 
	return;
}

Fixed::Fixed(const float val){

	this->_value = (int)roundf(val * (1 << _bits));
	return;
}

Fixed::~Fixed(){

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

	this->_value = x.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &x){
	
	out << x.toFloat();
	return (out);
}

Fixed	&Fixed::min(Fixed &x, Fixed &y){

	if (x < y)
		return (y);
	return (x);
}

Fixed	&Fixed::max(Fixed &x, Fixed &y){

	if (x > y)
		return (x);
	return (y);
}

const Fixed	&Fixed::min(const Fixed &x, const Fixed &y){
	
	if ((Fixed)x < (Fixed)y)
		return (x);
	return (y);
}

const Fixed	&Fixed::max(const Fixed &x, const Fixed &y){
	
	if ((Fixed)x > (Fixed)y)
		return (x);
	return (y);
}

// Arithmetic operator

Fixed	Fixed::operator+(const Fixed &x)const{

	return Fixed((this->_value + x._value) / 256);
}

Fixed	Fixed::operator-(const Fixed &x)const{

	return Fixed((this->_value - x._value) / 256);
}

Fixed	Fixed::operator*(const Fixed &x)const{

	Fixed	copy;

	copy.setRawBits((this->_value * x._value) / 256);
	return (copy);
}

Fixed	Fixed::operator/(const Fixed &x)const{

	Fixed	copy;
	
	if (this->_value == 0)
		return (0);
	copy.setRawBits((this->_value / x._value) * 256);
	return (copy);
}

// Compare operator

bool	Fixed::operator==(const Fixed &x)const{

	if (this->_value == x.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &x)const{

	if (this->_value != x.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &x)const{

	if (this->_value >= x.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &x)const{

	if (this->_value <= x.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &x)const{

	if (this->_value > x.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &x)const{

	if (this->_value < x.getRawBits())
		return (true);
	return (false);
}

// Increment & Decrement operator

Fixed	&Fixed::operator++(){

	++(this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int){

	Fixed	copy(*this);
	
	++(*this);
	return (copy);
}

Fixed	&Fixed::operator--(){

	--(this->_value);
	return (*this);
}

Fixed	Fixed::operator--(int){

	Fixed	copy(*this);

	--(*this);
	return (copy);
}
