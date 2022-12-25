/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:57:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 18:32:07 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(const std::string &literal){

	double	x = atof(literal.c_str());
	this->_conv = x;
	return;
}

ScalarConversion::ScalarConversion(const ScalarConversion &cpy){

	(*this) = cpy;
	return;
}

ScalarConversion::~ScalarConversion(){

	return;
}

ScalarConversion	&ScalarConversion::operator=(const ScalarConversion &x){

	this->_conv = x._conv;
	return (*this);
}

char	ScalarConversion::getChar()const{

	if (!std::isfinite(this->_conv) || this->_conv < CHAR_MIN || this->_conv > CHAR_MAX){

		throw ConversionExceptionImpossible();
	}
	else if (this->_conv < 32 || this->_conv > 126){

		throw ConversionExceptionDisplay();
	}
	return (static_cast<char>(this->_conv));
}

int	ScalarConversion::getInt()const{

	if (!std::isfinite(this->_conv) || this->_conv < INT_MIN || this->_conv > INT_MAX){

		throw ConversionExceptionImpossible();
	}
	return (static_cast<int>(this->_conv));
}

float	ScalarConversion::getFloat()const{

	return (static_cast<float>(this->_conv));
}

double	ScalarConversion::getDouble()const{

	return (this->_conv);
}

void	ScalarConversion::launchConversion()const{

	try{

		std::cout << "char : ";
		std::cout << getChar() << std::endl;
	}
	catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{

		std::cout << "int : ";
		std::cout << getInt() << std::endl;
	}
	catch(std::exception &e){

		std::cout << e.what() << std::endl;
	}
	std::cout << "float : " << std::fixed << std::setprecision(4) << getFloat() << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(4) << getDouble() << std::endl;
	return;
}
